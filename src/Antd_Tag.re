[@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/tag";

[%bs.raw {|require("antd/lib/tag/style")|}];

[@bs.obj]
external makeProps:
  (
    ~afterClose: unit => unit=?,
    ~closable: bool=?,
    ~color: string=?,
    ~onClose: ReactEvent.Mouse.t => unit=?,
    ~visible: bool=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~afterClose=?,
      ~closable=?,
      ~color=?,
      ~onClose=?,
      ~visible=?,
      ~id=?,
      ~className=?,
      ~style=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~afterClose?,
        ~closable?,
        ~color?,
        ~onClose?,
        ~visible?,
        ~id?,
        ~className?,
        ~style?,
        (),
      ),
    children,
  );

module CheckableTag = {
  [@bs.module "antd/lib/tag"]
  external reactClass: ReasonReact.reactClass = "CheckableTag";
  [@bs.obj]
  external makeProps:
    (
      ~checked: bool=?,
      ~onChange: bool => unit=?,
      ~className: string=?,
      ~tab: ReasonReact.reactElement=?,
      ~style: ReactDOMRe.Style.t=?,
      unit
    ) =>
    _ =
    "";
  let make = (~checked=?, ~onChange=?, ~className=?, ~style=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=makeProps(~checked?, ~onChange?, ~className?, ~style?, ()),
      children,
    );
  /**
 * This is a wrapper created to let this component be used from the new React api.
 * Please convert this component to a [@react.component] function and then remove this wrapping code.
 */
  let make =
    ReasonReactCompat.wrapReasonReactForReact(
      ~component=ReasonReact.statelessComponent("TemporaryRefactorComponent"),
      (
        reactProps: {
          .
          "style": option('style),
          "className": option('className),
          "onChange": option('onChange),
          "checked": option('checked),
          "children": 'children,
        },
      ) =>
      make(
        ~style=?reactProps##style,
        ~className=?reactProps##className,
        ~onChange=?reactProps##onChange,
        ~checked=?reactProps##checked,
        reactProps##children,
      )
    );
  [@bs.obj]
  external makeProps:
    (
      ~children: 'children,
      ~checked: 'checked=?,
      ~onChange: 'onChange=?,
      ~className: 'className=?,
      ~style: 'style=?,
      unit
    ) =>
    {
      .
      "style": option('style),
      "className": option('className),
      "onChange": option('onChange),
      "checked": option('checked),
      "children": 'children,
    } =
    "";
};
/**
 * This is a wrapper created to let this component be used from the new React api.
 * Please convert this component to a [@react.component] function and then remove this wrapping code.
 */
let make =
  ReasonReactCompat.wrapReasonReactForReact(
    ~component=ReasonReact.statelessComponent("TemporaryRefactorComponent"),
    (
      reactProps: {
        .
        "style": option('style),
        "className": option('className),
        "id": option('id),
        "visible": option('visible),
        "onClose": option('onClose),
        "color": option('color),
        "closable": option('closable),
        "afterClose": option('afterClose),
        "children": 'children,
      },
    ) =>
    make(
      ~style=?reactProps##style,
      ~className=?reactProps##className,
      ~id=?reactProps##id,
      ~visible=?reactProps##visible,
      ~onClose=?reactProps##onClose,
      ~color=?reactProps##color,
      ~closable=?reactProps##closable,
      ~afterClose=?reactProps##afterClose,
      reactProps##children,
    )
  );
[@bs.obj]
external makeProps:
  (
    ~children: 'children,
    ~afterClose: 'afterClose=?,
    ~closable: 'closable=?,
    ~color: 'color=?,
    ~onClose: 'onClose=?,
    ~visible: 'visible=?,
    ~id: 'id=?,
    ~className: 'className=?,
    ~style: 'style=?,
    unit
  ) =>
  {
    .
    "style": option('style),
    "className": option('className),
    "id": option('id),
    "visible": option('visible),
    "onClose": option('onClose),
    "color": option('color),
    "closable": option('closable),
    "afterClose": option('afterClose),
    "children": 'children,
  } =
  "";

/*
 afterClose	Callback executed when close animation is completed	() => void	-
 closable	Whether the Tag can be closed	boolean	false
 color	Color of the Tag	string	-
 onClose	Callback executed when tag is closed	(e) => void	-
 visible	Whether the Tag is closed or not	boolean	true
   */

/*
 checked	Checked status of Tag	boolean	false
 onChange	Callback executed when Tag is checked/unchecked	(checked) => void	-
  */
