[@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/steps";

[%bs.raw {|require("antd/lib/steps/style")|}];

[@bs.deriving jsConverter]
type status = [ | `wait | `process | `finish | `error];

[@bs.obj]
external makeProps:
  (~status: string=?, ~current: int=?, ~style: ReactDOMRe.Style.t=?, unit) => _ =
  "";

let make = (~status=?, ~current=?, ~style=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~status=?Js.Option.map((. b) => statusToJs(b), status),
        ~current?,
        ~style?,
        (),
      ),
    children,
  );

module Step = {
  [@bs.module "antd/lib/steps"]
  external reactClass: ReasonReact.reactClass = "Step";

  [@bs.obj]
  external makeProps: (~title: string, ~description: string=?, unit) => _ = "";
  let make = (~title, ~description=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=makeProps(~title, ~description?, ()),
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
          "description": option('description),
          "title": 'title,
          "children": 'children,
        },
      ) =>
      make(
        ~description=?reactProps##description,
        ~title=reactProps##title,
        reactProps##children,
      )
    );
  [@bs.obj]
  external makeProps:
    (
      ~children: 'children,
      ~title: 'title,
      ~description: 'description=?,
      unit
    ) =>
    {
      .
      "description": option('description),
      "title": 'title,
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
        "current": option('current),
        "status": option('status),
        "children": 'children,
      },
    ) =>
    make(
      ~style=?reactProps##style,
      ~current=?reactProps##current,
      ~status=?reactProps##status,
      reactProps##children,
    )
  );
[@bs.obj]
external makeProps:
  (
    ~children: 'children,
    ~status: 'status=?,
    ~current: 'current=?,
    ~style: 'style=?,
    unit
  ) =>
  {
    .
    "style": option('style),
    "current": option('current),
    "status": option('status),
    "children": 'children,
  } =
  "";
