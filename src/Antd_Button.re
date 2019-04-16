module IconName = Antd_IconName;

[@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/button";

[%bs.raw {|require("antd/lib/button/style")|}];

[@bs.deriving jsConverter]
type buttonType = [ | `primary | `ghost | `dashed | `danger];

[@bs.deriving jsConverter]
type buttonShape = [ | `circle' | [@bs.as "circle-outline"] `circleOutline];

[@bs.deriving jsConverter]
type buttonSize = [ | `small | `default | `large];

module LoadingProps = {
  type delay = {. "delay": int};
  type t =
    | Bool(bool)
    | Delay(delay);
  type js;
  external ofBool: bool => js = "%identity";
  external ofDelay: delay => js = "%identity";
  let toJs: t => js =
    fun
    | Bool(a) => a |> ofBool
    | Delay(a) => a |> ofDelay;
};

[@bs.obj]
external makeProps:
  (
    ~_type: string=?,
    ~htmlType: string=?,
    ~icon: IconName.t=?,
    ~shape: string=?,
    ~size: string=?,
    ~onClick: ReactEvent.Mouse.t => unit=?,
    ~onMouseUp: ReactEvent.Mouse.t => unit=?,
    ~onMouseDown: ReactEvent.Mouse.t => unit=?,
    ~tabIndex: int=?,
    ~loading: LoadingProps.js=?,
    ~disabled: bool=?,
    ~ghost: bool=?,
    ~target: string=?,
    ~href: string=?,
    ~download: string=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~_type=?,
      ~htmlType=?,
      ~icon=?,
      ~shape=?,
      ~size=?,
      ~onClick=?,
      ~onMouseUp=?,
      ~onMouseDown=?,
      ~tabIndex=?,
      ~loading: option(LoadingProps.t)=?,
      ~disabled=?,
      ~ghost=?,
      ~target=?,
      ~href=?,
      ~download=?,
      ~id=?,
      ~className=?,
      ~style=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~_type=?Js.Option.map((. b) => buttonTypeToJs(b), _type),
        ~htmlType?,
        ~icon?,
        ~shape=?Js.Option.map((. b) => buttonShapeToJs(b), shape),
        ~size=?Js.Option.map((. b) => buttonSizeToJs(b), size),
        ~onClick?,
        ~onMouseUp?,
        ~onMouseDown?,
        ~tabIndex?,
        ~loading=?Js.Option.map((. b) => LoadingProps.toJs(b), loading),
        ~disabled?,
        ~ghost?,
        ~target?,
        ~href?,
        ~download?,
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
        "download": option('download),
        "href": option('href),
        "target": option('target),
        "ghost": option('ghost),
        "disabled": option('disabled),
        "loading": option('loading),
        "tabIndex": option('tabIndex),
        "onMouseDown": option('onMouseDown),
        "onMouseUp": option('onMouseUp),
        "onClick": option('onClick),
        "size": option('size),
        "shape": option('shape),
        "icon": option('icon),
        "htmlType": option('htmlType),
        "_type": option('T_type),
        "children": 'children,
      },
    ) =>
    make(
      ~style=?reactProps##style,
      ~className=?reactProps##className,
      ~id=?reactProps##id,
      ~download=?reactProps##download,
      ~href=?reactProps##href,
      ~target=?reactProps##target,
      ~ghost=?reactProps##ghost,
      ~disabled=?reactProps##disabled,
      ~loading=?reactProps##loading,
      ~tabIndex=?reactProps##tabIndex,
      ~onMouseDown=?reactProps##onMouseDown,
      ~onMouseUp=?reactProps##onMouseUp,
      ~onClick=?reactProps##onClick,
      ~size=?reactProps##size,
      ~shape=?reactProps##shape,
      ~icon=?reactProps##icon,
      ~htmlType=?reactProps##htmlType,
      ~_type=?reactProps##_type,
      reactProps##children,
    )
  );
[@bs.obj]
external makeProps:
  (
    ~children: 'children,
    ~_type: 'T_type=?,
    ~htmlType: 'htmlType=?,
    ~icon: 'icon=?,
    ~shape: 'shape=?,
    ~size: 'size=?,
    ~onClick: 'onClick=?,
    ~onMouseUp: 'onMouseUp=?,
    ~onMouseDown: 'onMouseDown=?,
    ~tabIndex: 'tabIndex=?,
    ~loading: 'loading=?,
    ~disabled: 'disabled=?,
    ~ghost: 'ghost=?,
    ~target: 'target=?,
    ~href: 'href=?,
    ~download: 'download=?,
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
    "download": option('download),
    "href": option('href),
    "target": option('target),
    "ghost": option('ghost),
    "disabled": option('disabled),
    "loading": option('loading),
    "tabIndex": option('tabIndex),
    "onMouseDown": option('onMouseDown),
    "onMouseUp": option('onMouseUp),
    "onClick": option('onClick),
    "size": option('size),
    "shape": option('shape),
    "icon": option('icon),
    "htmlType": option('htmlType),
    "_type": option('T_type),
    "children": 'children,
  } =
  "";
