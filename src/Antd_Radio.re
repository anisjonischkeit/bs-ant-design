[@bs.module "antd/lib/radio"]
external reactClass: ReasonReact.reactClass = "default";

[%bs.raw {|require("antd/lib/radio/style")|}];

[@bs.obj]
external makeProps:
  (
    ~autoFocus: bool=?,
    ~checked: bool=?,
    ~defaultChecked: bool=?,
    ~disabled: bool=?,
    ~value: string=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~autoFocus=?,
      ~checked=?,
      ~defaultChecked=?,
      ~disabled=?,
      ~value=?,
      ~id=?,
      ~className=?,
      ~style=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~autoFocus?,
        ~checked?,
        ~defaultChecked?,
        ~disabled?,
        ~value?,
        ~id?,
        ~className?,
        ~style?,
        (),
      ),
    children,
  );

module Group = {
  [@bs.module "antd/lib/radio"]
  external reactClass: ReasonReact.reactClass = "Group";
  [@bs.deriving jsConverter]
  type size = [ | `default | `small | `large];
  [@bs.obj]
  external makeProps:
    (
      ~defaultValue: string=?,
      ~disabled: bool=?,
      ~name: string=?,
      ~options: 'a=?,
      ~size: string=?,
      ~value: string,
      ~onChange: ReactEvent.Form.t => unit=?,
      ~id: string=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~defaultValue=?,
        ~disabled=?,
        ~name=?,
        ~options=?,
        ~size=?,
        ~value,
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
          ~defaultValue?,
          ~disabled?,
          ~name?,
          ~options?,
          ~size=?Js.Option.map((. b) => sizeToJs(b), size),
          ~value,
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
          "value": 'value,
          "size": option('size),
          "options": option('options),
          "name": option('name),
          "disabled": option('disabled),
          "defaultValue": option('defaultValue),
          "children": 'children,
        },
      ) =>
      make(
        ~style=?reactProps##style,
        ~className=?reactProps##className,
        ~id=?reactProps##id,
        ~onChange=?reactProps##onChange,
        ~value=reactProps##value,
        ~size=?reactProps##size,
        ~options=?reactProps##options,
        ~name=?reactProps##name,
        ~disabled=?reactProps##disabled,
        ~defaultValue=?reactProps##defaultValue,
        reactProps##children,
      )
    );
  [@bs.obj]
  external makeProps:
    (
      ~children: 'children,
      ~defaultValue: 'defaultValue=?,
      ~disabled: 'disabled=?,
      ~name: 'name=?,
      ~options: 'options=?,
      ~size: 'size=?,
      ~value: 'value,
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
      "value": 'value,
      "size": option('size),
      "options": option('options),
      "name": option('name),
      "disabled": option('disabled),
      "defaultValue": option('defaultValue),
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
        "value": option('value),
        "disabled": option('disabled),
        "defaultChecked": option('defaultChecked),
        "checked": option('checked),
        "autoFocus": option('autoFocus),
        "children": 'children,
      },
    ) =>
    make(
      ~style=?reactProps##style,
      ~className=?reactProps##className,
      ~id=?reactProps##id,
      ~value=?reactProps##value,
      ~disabled=?reactProps##disabled,
      ~defaultChecked=?reactProps##defaultChecked,
      ~checked=?reactProps##checked,
      ~autoFocus=?reactProps##autoFocus,
      reactProps##children,
    )
  );
[@bs.obj]
external makeProps:
  (
    ~children: 'children,
    ~autoFocus: 'autoFocus=?,
    ~checked: 'checked=?,
    ~defaultChecked: 'defaultChecked=?,
    ~disabled: 'disabled=?,
    ~value: 'value=?,
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
    "value": option('value),
    "disabled": option('disabled),
    "defaultChecked": option('defaultChecked),
    "checked": option('checked),
    "autoFocus": option('autoFocus),
    "children": 'children,
  } =
  "";

/* @todo: type me */
