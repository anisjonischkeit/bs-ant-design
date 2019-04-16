[@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/input";

[%bs.raw {|require("antd/lib/input/style")|}];

[@bs.deriving jsConverter]
type size = [ | `large | `default | `small];

[@bs.obj]
external makeProps:
  (
    ~placeholder: string=?,
    ~addonAfter: ReasonReact.reactElement=?,
    ~addonBefore: ReasonReact.reactElement=?,
    ~defaultValue: string=?,
    ~disabled: bool=?,
    ~id: string=?,
    ~prefix: ReasonReact.reactElement=?,
    ~size: string=?,
    ~suffix: ReasonReact.reactElement=?,
    ~_type: string=?,
    ~value: string=?,
    ~onChange: ReactEvent.Form.t => unit=?,
    ~onPressEnter: ReactEvent.Keyboard.t=?,
    ~autoComplete: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~placeholder=?,
      ~addonAfter=?,
      ~addonBefore=?,
      ~defaultValue=?,
      ~disabled=?,
      ~id=?,
      ~prefix=?,
      ~size=?,
      ~suffix=?,
      ~_type=?,
      ~value=?,
      ~onChange=?,
      ~onPressEnter=?,
      ~autoComplete=?,
      ~className=?,
      ~style=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~placeholder?,
        ~addonAfter?,
        ~addonBefore?,
        ~defaultValue?,
        ~disabled?,
        ~id?,
        ~prefix?,
        ~size=?Js.Option.map((. b) => sizeToJs(b), size),
        ~suffix?,
        ~_type?,
        ~value?,
        ~onChange?,
        ~onPressEnter?,
        ~autoComplete?,
        ~className?,
        ~style?,
        (),
      ),
    children,
  );

module TextArea = {
  [@bs.module "antd/lib/input"]
  external reactClass: ReasonReact.reactClass = "TextArea";

  [@bs.obj]
  external makeProps:
    (
      ~placeholder: string=?,
      ~autosize: bool=?,
      ~defaultValue: string=?,
      ~value: string=?,
      ~onPressEnter: ReactEvent.Keyboard.t=?,
      ~onChange: ReactEvent.Form.t => unit=?,
      ~onBlur: ReactEvent.Keyboard.t=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~id: string=?,
      unit
    ) =>
    _ =
    "";

  let make =
      (
        ~placeholder=?,
        ~autosize=?,
        ~defaultValue=?,
        ~value=?,
        ~onPressEnter=?,
        ~onChange=?,
        ~onBlur=?,
        ~className=?,
        ~style=?,
        ~id=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~placeholder?,
          ~autosize?,
          ~defaultValue?,
          ~value?,
          ~onPressEnter?,
          ~onChange?,
          ~onBlur?,
          ~className?,
          ~style?,
          ~id?,
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
          "id": option('id),
          "style": option('style),
          "className": option('className),
          "onBlur": option('onBlur),
          "onChange": option('onChange),
          "onPressEnter": option('onPressEnter),
          "value": option('value),
          "defaultValue": option('defaultValue),
          "autosize": option('autosize),
          "placeholder": option('placeholder),
          "children": 'children,
        },
      ) =>
      make(
        ~id=?reactProps##id,
        ~style=?reactProps##style,
        ~className=?reactProps##className,
        ~onBlur=?reactProps##onBlur,
        ~onChange=?reactProps##onChange,
        ~onPressEnter=?reactProps##onPressEnter,
        ~value=?reactProps##value,
        ~defaultValue=?reactProps##defaultValue,
        ~autosize=?reactProps##autosize,
        ~placeholder=?reactProps##placeholder,
        reactProps##children,
      )
    );
  [@bs.obj]
  external makeProps:
    (
      ~children: 'children,
      ~placeholder: 'placeholder=?,
      ~autosize: 'autosize=?,
      ~defaultValue: 'defaultValue=?,
      ~value: 'value=?,
      ~onPressEnter: 'onPressEnter=?,
      ~onChange: 'onChange=?,
      ~onBlur: 'onBlur=?,
      ~className: 'className=?,
      ~style: 'style=?,
      ~id: 'id=?,
      unit
    ) =>
    {
      .
      "id": option('id),
      "style": option('style),
      "className": option('className),
      "onBlur": option('onBlur),
      "onChange": option('onChange),
      "onPressEnter": option('onPressEnter),
      "value": option('value),
      "defaultValue": option('defaultValue),
      "autosize": option('autosize),
      "placeholder": option('placeholder),
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
        "autoComplete": option('autoComplete),
        "onPressEnter": option('onPressEnter),
        "onChange": option('onChange),
        "value": option('value),
        "_type": option('T_type),
        "suffix": option('suffix),
        "size": option('size),
        "prefix": option('prefix),
        "id": option('id),
        "disabled": option('disabled),
        "defaultValue": option('defaultValue),
        "addonBefore": option('addonBefore),
        "addonAfter": option('addonAfter),
        "placeholder": option('placeholder),
        "children": 'children,
      },
    ) =>
    make(
      ~style=?reactProps##style,
      ~className=?reactProps##className,
      ~autoComplete=?reactProps##autoComplete,
      ~onPressEnter=?reactProps##onPressEnter,
      ~onChange=?reactProps##onChange,
      ~value=?reactProps##value,
      ~_type=?reactProps##_type,
      ~suffix=?reactProps##suffix,
      ~size=?reactProps##size,
      ~prefix=?reactProps##prefix,
      ~id=?reactProps##id,
      ~disabled=?reactProps##disabled,
      ~defaultValue=?reactProps##defaultValue,
      ~addonBefore=?reactProps##addonBefore,
      ~addonAfter=?reactProps##addonAfter,
      ~placeholder=?reactProps##placeholder,
      reactProps##children,
    )
  );
[@bs.obj]
external makeProps:
  (
    ~children: 'children,
    ~placeholder: 'placeholder=?,
    ~addonAfter: 'addonAfter=?,
    ~addonBefore: 'addonBefore=?,
    ~defaultValue: 'defaultValue=?,
    ~disabled: 'disabled=?,
    ~id: 'id=?,
    ~prefix: 'prefix=?,
    ~size: 'size=?,
    ~suffix: 'suffix=?,
    ~_type: 'T_type=?,
    ~value: 'value=?,
    ~onChange: 'onChange=?,
    ~onPressEnter: 'onPressEnter=?,
    ~autoComplete: 'autoComplete=?,
    ~className: 'className=?,
    ~style: 'style=?,
    unit
  ) =>
  {
    .
    "style": option('style),
    "className": option('className),
    "autoComplete": option('autoComplete),
    "onPressEnter": option('onPressEnter),
    "onChange": option('onChange),
    "value": option('value),
    "_type": option('T_type),
    "suffix": option('suffix),
    "size": option('size),
    "prefix": option('prefix),
    "id": option('id),
    "disabled": option('disabled),
    "defaultValue": option('defaultValue),
    "addonBefore": option('addonBefore),
    "addonAfter": option('addonAfter),
    "placeholder": option('placeholder),
    "children": 'children,
  } =
  "";

/*

 addonAfter	The label text displayed after (on the right side of) the input field.	string|ReactNode
 addonBefore	The label text displayed before (on the left side of) the input field.	string|ReactNode
 defaultValue	The initial input content	string
 disabled	Whether the input is disabled.	boolean	false
 id	The ID for input	string
 prefix	The prefix icon for the Input.	string|ReactNode
 size	The size of the input box. Note: in the context of a form, the large size is used. Available: large default small	string	default
 suffix	The suffix icon for the Input.	string|ReactNode
 type	The type of input, see: MDN(use Input.TextArea instead of type="textarea")	string	text
 value	The input content value	string
 onChange	callback when user input	function(e)
 onPressEnter	The callback function that is triggered when Enter key is pressed.	function(e)

 */

/*
 Was in autocomplete file for some reason
 [@bs.module "antd/lib/input"] external reactClass: ReasonReact.reactClass = "TextArea";
 let make = (~value=?, ~defaultValue=?, ~onChange=?, ~onPressEnter=?, ~onBlur=?, ~className=?, ~style=?, children) =>
   ReasonReact.wrapJsForReason(
     ~reactClass,
     ~props=makeProps(~value?, ~defaultValue?, ~onChange?, ~onPressEnter?, ~onBlur?, ~className?, ~style?, ()),
     children,
   );

 */

/*
 autosize	Height autosize feature, can be set to true|false or an object { minRows: 2, maxRows: 6 }	boolean|object	false
 defaultValue	The initial input content	string
 value	The input content value	string
 onPressEnter	The callback function that is triggered when Enter key is pressed.	function(e)
 */
