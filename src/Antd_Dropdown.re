module Menu = Antd_Menu;

[@bs.module] external dropdown: ReasonReact.reactClass = "antd/lib/dropdown";

[%bs.raw {|require("antd/lib/dropdown/style")|}];

[@bs.deriving jsConverter]
type placement = [
  | [@bs.as "bottomLeft"] `bottomLeft
  | [@bs.as "bottomCenter"] `bottomCenter
  | [@bs.as "bottomRight"] `bottomRight
  | [@bs.as "topLeft"] `topLeft
  | [@bs.as "topCenter"] `topCenter
  | [@bs.as "topRight"] `topRight
];

[@bs.deriving jsConverter]
type buttonSize = [ | `small | `default | `large];

[@bs.deriving jsConverter]
type buttonType = [ | `primary | `ghost | `dashed | `danger];

[@bs.deriving jsConverter]
type trigger = [
  | [@bs.as "click"] `click
  | [@bs.as "hover"] `hover
  | [@bs.as "contextMenu"] `contextMenu
];

[@bs.obj]
external makeProps:
  (
    ~disabled: bool=?,
    ~overlay: ReasonReact.reactElement=?,
    ~overlayClassName: string=?,
    ~placement: string=?,
    ~trigger: array(string)=?,
    ~visible: bool=?,
    ~onVisibleChange: ReactEvent.Mouse.t => unit=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~disabled=?,
      ~overlay=?,
      ~overlayClassName=?,
      ~placement=?,
      ~trigger=?,
      ~visible=?,
      ~onVisibleChange=?,
      ~id=?,
      ~className=?,
      ~style=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=dropdown,
    ~props=
      makeProps(
        ~disabled?,
        ~overlay?,
        ~overlayClassName?,
        ~placement=?Js.Option.map((. b) => placementToJs(b), placement),
        ~trigger=?Js.Option.map((. b) => Array.of_list(b), trigger),
        ~visible?,
        ~onVisibleChange?,
        ~id?,
        ~className?,
        ~style?,
        (),
      ),
    children,
  );

module Button = {
  [@bs.module "antd/lib/dropdown"]
  external dropdownButton: ReasonReact.reactClass = "Dropdown.Button";
  [@bs.obj]
  external makeProps:
    (
      ~disabled: bool=?,
      ~overlay: ReasonReact.reactElement=?,
      ~placement: string=?,
      ~size: string=?,
      ~trigger: array(string)=?,
      ~_type: string=?,
      ~visible: bool=?,
      ~onClick: ReactEvent.Mouse.t => unit=?,
      ~onVisibleChange: ReactEvent.Mouse.t => unit=?,
      ~key: string=?,
      ~id: string=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~disabled=?,
        ~overlay=?,
        ~placement=?,
        ~size=?,
        ~trigger=?,
        ~_type=?,
        ~visible=?,
        ~onClick=?,
        ~onVisibleChange=?,
        ~key_=?,
        ~id=?,
        ~className=?,
        ~style=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=dropdownButton,
      ~props=
        makeProps(
          ~disabled?,
          ~overlay?,
          ~placement=?Js.Option.map((. b) => placementToJs(b), placement),
          ~size=?Js.Option.map((. b) => buttonSizeToJs(b), size),
          ~trigger=?Js.Option.map((. b) => Array.of_list(b), trigger),
          ~_type=?Js.Option.map((. b) => buttonTypeToJs(b), _type),
          ~visible?,
          ~onClick?,
          ~onVisibleChange?,
          ~key=?key_,
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
          "key_": option('key_),
          "onVisibleChange": option('onVisibleChange),
          "onClick": option('onClick),
          "visible": option('visible),
          "_type": option('T_type),
          "trigger": option('trigger),
          "size": option('size),
          "placement": option('placement),
          "overlay": option('overlay),
          "disabled": option('disabled),
          "children": 'children,
        },
      ) =>
      make(
        ~style=?reactProps##style,
        ~className=?reactProps##className,
        ~id=?reactProps##id,
        ~key_=?reactProps##key_,
        ~onVisibleChange=?reactProps##onVisibleChange,
        ~onClick=?reactProps##onClick,
        ~visible=?reactProps##visible,
        ~_type=?reactProps##_type,
        ~trigger=?reactProps##trigger,
        ~size=?reactProps##size,
        ~placement=?reactProps##placement,
        ~overlay=?reactProps##overlay,
        ~disabled=?reactProps##disabled,
        reactProps##children,
      )
    );
  [@bs.obj]
  external makeProps:
    (
      ~children: 'children,
      ~disabled: 'disabled=?,
      ~overlay: 'overlay=?,
      ~placement: 'placement=?,
      ~size: 'size=?,
      ~trigger: 'trigger=?,
      ~_type: 'T_type=?,
      ~visible: 'visible=?,
      ~onClick: 'onClick=?,
      ~onVisibleChange: 'onVisibleChange=?,
      ~key_: 'key_=?,
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
      "key_": option('key_),
      "onVisibleChange": option('onVisibleChange),
      "onClick": option('onClick),
      "visible": option('visible),
      "_type": option('T_type),
      "trigger": option('trigger),
      "size": option('size),
      "placement": option('placement),
      "overlay": option('overlay),
      "disabled": option('disabled),
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
        "onVisibleChange": option('onVisibleChange),
        "visible": option('visible),
        "trigger": option('trigger),
        "placement": option('placement),
        "overlayClassName": option('overlayClassName),
        "overlay": option('overlay),
        "disabled": option('disabled),
        "children": 'children,
      },
    ) =>
    make(
      ~style=?reactProps##style,
      ~className=?reactProps##className,
      ~id=?reactProps##id,
      ~onVisibleChange=?reactProps##onVisibleChange,
      ~visible=?reactProps##visible,
      ~trigger=?reactProps##trigger,
      ~placement=?reactProps##placement,
      ~overlayClassName=?reactProps##overlayClassName,
      ~overlay=?reactProps##overlay,
      ~disabled=?reactProps##disabled,
      reactProps##children,
    )
  );
[@bs.obj]
external makeProps:
  (
    ~children: 'children,
    ~disabled: 'disabled=?,
    ~overlay: 'overlay=?,
    ~overlayClassName: 'overlayClassName=?,
    ~placement: 'placement=?,
    ~trigger: 'trigger=?,
    ~visible: 'visible=?,
    ~onVisibleChange: 'onVisibleChange=?,
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
    "onVisibleChange": option('onVisibleChange),
    "visible": option('visible),
    "trigger": option('trigger),
    "placement": option('placement),
    "overlayClassName": option('overlayClassName),
    "overlay": option('overlay),
    "disabled": option('disabled),
    "children": 'children,
  } =
  "";

/*
 module Dropdown = {
   [@bs.module] external dropdown : ReasonReact.reactClass = "antd/lib/dropdown";
   let make =
       (
         ~align=?,
         ~disabled=?,
         ~type_=?,
         ~className=?,
         ~size=?,
         ~style=?,
         ~overlay=?,
         ~onVisibleChange=?,
         ~id=?,
         ~visible=?,
         ~placement=?,
         ~trigger=?,
         ~onClick=?
       ) =>
     ReasonReact.wrapJsForReason(
       ~reactClass=dropdown,
       ~props=
         Js.Undefined.(
           {
             "align": from_opt(align),
             "disabled": unwrapBool(disabled),
             "type": from_opt(type_),
             "className": from_opt(className),
             "size": from_opt(size),
             "style": from_opt(style),
             "overlay": from_opt(overlay),
             "onVisibleChange": from_opt(onVisibleChange),
             "id": from_opt(id),
             "visible": unwrapBool(visible),
             "placement": from_opt(placement),
             "trigger": from_opt(trigger),
             "onClick": from_opt(onClick)
           }
         )
     );
 };

 */

/*
 disabled	whether the dropdown menu is disabled	boolean	-
 getPopupContainer	to set the container of the dropdown menu. The default is to create a div element in body, you can reset it to the scrolling area and make a relative reposition. example	Function(triggerNode)	() => document.body
 overlay	the dropdown menu	Menu	-
 overlayClassName	Class name of the dropdown root element	string	-
 overlayStyle	Style of the dropdown root element	object	-
 placement	placement of pop menu: bottomLeft bottomCenter bottomRight topLeft topCenter topRight	String	bottomLeft
 trigger	the trigger mode which executes the drop-down action, hover doesn't work on mobile device	Array<click|hover|contextMenu>	['hover']
 visible	whether the dropdown menu is visible	boolean	-
 onVisibleChange	a callback function takes an argument: visible, is executed when the visible state is changed	Function(visible)
 */

/*
 disabled	whether the dropdown menu is disabled	boolean	-
 overlay	the dropdown menu	Menu	-
 placement	placement of pop menu: bottomLeft bottomCenter bottomRight topLeft topCenter topRight	String	bottomLeft
 size	size of the button, the same as Button	string	default
 trigger	the trigger mode which executes the drop-down action	Array<click|hover|contextMenu>	['hover']
 type	type of the button, the same as Button	string	default
 visible	whether the dropdown menu is visible	boolean	-
 onClick	a callback function, the same as Button, which will be executed when you click the button on the left	Function	-
 onVisibleChange	a callback function takes an argument: visible, is executed when the visible state is changed	Function
 */
