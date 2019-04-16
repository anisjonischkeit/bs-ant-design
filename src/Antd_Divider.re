[@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/divider";

[%bs.raw {|require("antd/lib/divider/style")|}];

[@bs.deriving jsConverter]
type dividerType = [ | `horizontal | `vertical];

[@bs.obj]
external makeProps:
  (
    ~_type: string=?,
    ~dash: bool=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

let make = (~_type=?, ~dash=?, ~id=?, ~className=?, ~style=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~_type=?Js.Option.map((. b) => dividerTypeToJs(b), _type),
        ~dash?,
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
        "dash": option('dash),
        "_type": option('T_type),
        "children": 'children,
      },
    ) =>
    make(
      ~style=?reactProps##style,
      ~className=?reactProps##className,
      ~id=?reactProps##id,
      ~dash=?reactProps##dash,
      ~_type=?reactProps##_type,
      reactProps##children,
    )
  );
[@bs.obj]
external makeProps:
  (
    ~children: 'children,
    ~_type: 'T_type=?,
    ~dash: 'dash=?,
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
    "dash": option('dash),
    "_type": option('T_type),
    "children": 'children,
  } =
  "";
