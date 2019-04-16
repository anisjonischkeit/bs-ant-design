[@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/affix";

[%bs.raw {|require("antd/lib/affix/style")|}];

[@bs.obj]
external makeProps:
  (
    ~offsetBottom: int=?,
    ~offsetTop: int=?,
    ~target: unit => Dom.htmlElement=?,
    ~onChange: bool => unit=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~offsetBottom=?,
      ~offsetTop=?,
      ~target=?,
      ~onChange=?,
      ~id=?,
      ~className=?,
      ~style=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~offsetBottom?,
        ~offsetTop?,
        ~target?,
        ~onChange?,
        ~id?,
        ~className?,
        ~style?,
        (),
      ),
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
        "id": option('id),
        "onChange": option('onChange),
        "target": option('target),
        "offsetTop": option('offsetTop),
        "offsetBottom": option('offsetBottom),
        "children": 'children,
      },
    ) =>
    make(
      ~style=?reactProps##style,
      ~className=?reactProps##className,
      ~id=?reactProps##id,
      ~onChange=?reactProps##onChange,
      ~target=?reactProps##target,
      ~offsetTop=?reactProps##offsetTop,
      ~offsetBottom=?reactProps##offsetBottom,
      reactProps##children,
    )
  );
[@bs.obj]
external makeProps:
  (
    ~children: 'children,
    ~offsetBottom: 'offsetBottom=?,
    ~offsetTop: 'offsetTop=?,
    ~target: 'target=?,
    ~onChange: 'onChange=?,
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
    "onChange": option('onChange),
    "target": option('target),
    "offsetTop": option('offsetTop),
    "offsetBottom": option('offsetBottom),
    "children": 'children,
  } =
  "";

/*
 offsetBottom	Pixels to offset from bottom when calculating position of scroll	number	-
 offsetTop	Pixels to offset from top when calculating position of scroll	number	0
 target	specifies the scrollable area dom node	() => HTMLElement	() => window
 onChange	Callback for when affix state is changed	Function(affixed)	-
 */
