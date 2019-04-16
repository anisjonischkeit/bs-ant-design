/* svg not working */

let component = ReasonReact.statelessComponent("Icon");

let make =
    (
      ~type_: Antd_IconName.t,
      ~className=?,
      ~title=?,
      ~onClick=?,
      ~spin=?,
      ~style=?,
      _children,
    ) => {
  ...component,
  render: _ => {
    let spin =
      switch (spin) {
      | Some(spin) => spin
      | None => false
      };
    let classString =
      Cn.make([
        "anticon",
        className->Cn.unpack,
        "anticon-" ++ Antd_IconName.toString(type_),
        "anticon-spin"
        ->Cn.ifTrue(
            spin || Antd_IconName.compare(Antd_IconName.loading, type_),
          ),
      ]);
    <i className=classString ?onClick ?style ?title />;
  },
};
/**
 * This is a wrapper created to let this component be used from the new React api.
 * Please convert this component to a [@react.component] function and then remove this wrapping code.
 */
let make =
  ReasonReactCompat.wrapReasonReactForReact(
    ~component,
    (
      reactProps: {
        .
        "style": option('style),
        "spin": option('spin),
        "onClick": option('onClick),
        "title": option('title),
        "className": option('className),
        "type_": 'type_,
        "children": 'children,
      },
    ) =>
    make(
      ~style=?reactProps##style,
      ~spin=?reactProps##spin,
      ~onClick=?reactProps##onClick,
      ~title=?reactProps##title,
      ~className=?reactProps##className,
      ~type_=reactProps##type_,
      reactProps##children,
    )
  );
[@bs.obj]
external makeProps:
  (
    ~children: 'children,
    ~type_: 'type_,
    ~className: 'className=?,
    ~title: 'title=?,
    ~onClick: 'onClick=?,
    ~spin: 'spin=?,
    ~style: 'style=?,
    unit
  ) =>
  {
    .
    "style": option('style),
    "spin": option('spin),
    "onClick": option('onClick),
    "title": option('title),
    "className": option('className),
    "type_": 'type_,
    "children": 'children,
  } =
  "";
