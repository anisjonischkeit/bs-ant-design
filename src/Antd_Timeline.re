[@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/timeline";

[%bs.raw {|require("antd/lib/timeline/style")|}];

[@bs.deriving jsConverter]
type modeType = [ | `left | `alternate | `right];

[@bs.obj]
external makeProps:
  (
    ~pending: ReasonReact.reactElement=?,
    ~pendingDot: ReasonReact.reactElement=?,
    ~reverse: bool=?,
    ~mode: string=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~pending=?,
      ~pendingDot=?,
      ~reverse=?,
      ~mode=?,
      ~id=?,
      ~className=?,
      ~style=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~pending?,
        ~pendingDot?,
        ~reverse?,
        ~mode=?Js.Option.map((. b) => modeTypeToJs(b), mode),
        ~id?,
        ~className?,
        ~style?,
        (),
      ),
    children,
  );

module Item = {
  [@bs.module "antd/lib/timeline"]
  external reactClass: ReasonReact.reactClass = "Item";
  [@bs.obj]
  external makeProps:
    (
      ~color: string=?,
      ~dot: ReasonReact.reactElement=?,
      ~className: string=?,
      ~tab: ReasonReact.reactElement=?,
      ~style: ReactDOMRe.Style.t=?,
      unit
    ) =>
    _ =
    "";
  let make = (~color=?, ~dot=?, ~className=?, ~style=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=makeProps(~color?, ~dot?, ~className?, ~style?, ()),
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
          "dot": option('dot),
          "color": option('color),
          "children": 'children,
        },
      ) =>
      make(
        ~style=?reactProps##style,
        ~className=?reactProps##className,
        ~dot=?reactProps##dot,
        ~color=?reactProps##color,
        reactProps##children,
      )
    );
  [@bs.obj]
  external makeProps:
    (
      ~children: 'children,
      ~color: 'color=?,
      ~dot: 'dot=?,
      ~className: 'className=?,
      ~style: 'style=?,
      unit
    ) =>
    {
      .
      "style": option('style),
      "className": option('className),
      "dot": option('dot),
      "color": option('color),
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
        "mode": option('mode),
        "reverse": option('reverse),
        "pendingDot": option('pendingDot),
        "pending": option('pending),
        "children": 'children,
      },
    ) =>
    make(
      ~style=?reactProps##style,
      ~className=?reactProps##className,
      ~id=?reactProps##id,
      ~mode=?reactProps##mode,
      ~reverse=?reactProps##reverse,
      ~pendingDot=?reactProps##pendingDot,
      ~pending=?reactProps##pending,
      reactProps##children,
    )
  );
[@bs.obj]
external makeProps:
  (
    ~children: 'children,
    ~pending: 'pending=?,
    ~pendingDot: 'pendingDot=?,
    ~reverse: 'reverse=?,
    ~mode: 'mode=?,
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
    "mode": option('mode),
    "reverse": option('reverse),
    "pendingDot": option('pendingDot),
    "pending": option('pending),
    "children": 'children,
  } =
  "";

/*
 pending	Set the last ghost node's existence or its content	boolean|string|ReactNode	false
 pendingDot	Set the dot of the last ghost node when pending is true	|string|ReactNode	<Icon type="loading" />
 reverse	reverse nodes or not	boolean	false
 mode	By sending alternate the timeline will distribute the nodes to the left and right.	left | alternate | right	left
    */

/*
 color	Set the circle's color to blue, red, green or other custom colors	string	blue
 dot	Customize timeline dot	string|ReactNode	-
   */
