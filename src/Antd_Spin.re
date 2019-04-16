[@bs.module] external spin: ReasonReact.reactClass = "antd/lib/spin";

[%bs.raw {|require("antd/lib/spin/style")|}];

[@bs.deriving jsConverter]
type size = [ | `default | `small | `large];

[@bs.obj]
external makeProps:
  (
    ~size: string=?,
    ~spinning: bool=?,
    ~tip: string=?,
    ~delay: int=?,
    ~wrapperClassName: string=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~size=?,
      ~spinning=?,
      ~tip=?,
      ~delay=?,
      ~wrapperClassName=?,
      ~id=?,
      ~className=?,
      ~style=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=spin,
    ~props=
      makeProps(
        ~size=?Js.Option.map((. b) => sizeToJs(b), size),
        ~spinning?,
        ~tip?,
        ~delay?,
        ~wrapperClassName?,
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
        "wrapperClassName": option('wrapperClassName),
        "delay": option('delay),
        "tip": option('tip),
        "spinning": option('spinning),
        "size": option('size),
        "children": 'children,
      },
    ) =>
    make(
      ~style=?reactProps##style,
      ~className=?reactProps##className,
      ~id=?reactProps##id,
      ~wrapperClassName=?reactProps##wrapperClassName,
      ~delay=?reactProps##delay,
      ~tip=?reactProps##tip,
      ~spinning=?reactProps##spinning,
      ~size=?reactProps##size,
      reactProps##children,
    )
  );
[@bs.obj]
external makeProps:
  (
    ~children: 'children,
    ~size: 'size=?,
    ~spinning: 'spinning=?,
    ~tip: 'tip=?,
    ~delay: 'delay=?,
    ~wrapperClassName: 'wrapperClassName=?,
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
    "wrapperClassName": option('wrapperClassName),
    "delay": option('delay),
    "tip": option('tip),
    "spinning": option('spinning),
    "size": option('size),
    "children": 'children,
  } =
  "";
