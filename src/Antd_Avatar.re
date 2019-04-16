module IconName = Antd_IconName;

[@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/avatar";

[%bs.raw {|require("antd/lib/avatar/style")|}];

[@bs.deriving jsConverter]
type avatarShape = [ | `circle | `square];

[@bs.deriving jsConverter]
type avatarSize = [ | `small | `default | `large];

[@bs.obj]
external makeProps:
  (
    ~icon: IconName.t=?,
    ~shape: string=?,
    ~size: int=?,
    ~src: string=?,
    ~alt: string=?,
    ~onError: unit => bool=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~icon=?,
      ~shape=?,
      ~size=?,
      ~src=?,
      ~alt=?,
      ~onError=?,
      ~id=?,
      ~className=?,
      ~style=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~icon?,
        ~shape=?Js.Option.map((. b) => avatarShapeToJs(b), shape),
        ~size?,
        ~src?,
        ~alt?,
        ~onError?,
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
        "onError": option('onError),
        "alt": option('alt),
        "src": option('src),
        "size": option('size),
        "shape": option('shape),
        "icon": option('icon),
        "children": 'children,
      },
    ) =>
    make(
      ~style=?reactProps##style,
      ~className=?reactProps##className,
      ~id=?reactProps##id,
      ~onError=?reactProps##onError,
      ~alt=?reactProps##alt,
      ~src=?reactProps##src,
      ~size=?reactProps##size,
      ~shape=?reactProps##shape,
      ~icon=?reactProps##icon,
      reactProps##children,
    )
  );
[@bs.obj]
external makeProps:
  (
    ~children: 'children,
    ~icon: 'icon=?,
    ~shape: 'shape=?,
    ~size: 'size=?,
    ~src: 'src=?,
    ~alt: 'alt=?,
    ~onError: 'onError=?,
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
    "onError": option('onError),
    "alt": option('alt),
    "src": option('src),
    "size": option('size),
    "shape": option('shape),
    "icon": option('icon),
    "children": 'children,
  } =
  "";

/* leaving this as int */

/*
 icon	the Icon type for an icon avatar, see Icon Component	string	-
 shape	the shape of avatar	circle | square	circle
 size	the size of the avatar	number | string: large small default	default
 src	the address of the image for an image avatar	string	-
 alt	This attribute defines the alternative text describing the image	string	-
 onError	handler when img load error?return false to prevent default fallback behavior	() => boolean	-
 */
