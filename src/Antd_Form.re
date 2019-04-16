[@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/form";

[%bs.raw {|require("antd/lib/form/style")|}];

[@bs.deriving jsConverter]
type formLayout = [
  | [@bs.as "horizontal"] `Horizontal
  | [@bs.as "inline"] `Inline
  | [@bs.as "vertical"] `Vertical
];

module Item = {
  [@bs.module]
  external reactClass: ReasonReact.reactClass = "antd/lib/form/FormItem";

  [@bs.deriving jsConverter]
  type validateStatus = [ | `success | `warning | `error | `validating];

  [@bs.obj]
  external makeProps:
    (
      ~prefixCls: string=?,
      ~className: string=?,
      ~id: string=?,
      ~label: ReasonReact.reactElement=?,
      ~labelCol: Antd_Grid.Col.props=?,
      ~wrapperCol: Antd_Grid.Col.props=?,
      ~help: ReasonReact.reactElement=?,
      ~extra: ReasonReact.reactElement=?,
      ~validateStatus: string=?,
      ~hasFeedback: bool=?,
      ~required: bool=?,
      ~style: ReactDOMRe.Style.t=?,
      ~colon: bool=?,
      unit
    ) =>
    _ =
    "";

  let make =
      (
        ~prefixCls=?,
        ~className=?,
        ~id=?,
        ~label=?,
        ~labelCol=?,
        ~wrapperCol=?,
        ~help=?,
        ~extra=?,
        ~validateStatus=?,
        ~hasFeedback=?,
        ~required=?,
        ~style=?,
        ~colon=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~prefixCls?,
          ~className?,
          ~id?,
          ~label?,
          ~labelCol?,
          ~wrapperCol?,
          ~help?,
          ~extra?,
          ~validateStatus=?
            Js.Option.map((. b) => validateStatusToJs(b), validateStatus),
          ~hasFeedback?,
          ~required?,
          ~style?,
          ~colon?,
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
          "colon": option('colon),
          "style": option('style),
          "required": option('required),
          "hasFeedback": option('hasFeedback),
          "validateStatus": option('validateStatus),
          "extra": option('extra),
          "help": option('help),
          "wrapperCol": option('wrapperCol),
          "labelCol": option('labelCol),
          "label": option('label),
          "id": option('id),
          "className": option('className),
          "prefixCls": option('prefixCls),
          "children": 'children,
        },
      ) =>
      make(
        ~colon=?reactProps##colon,
        ~style=?reactProps##style,
        ~required=?reactProps##required,
        ~hasFeedback=?reactProps##hasFeedback,
        ~validateStatus=?reactProps##validateStatus,
        ~extra=?reactProps##extra,
        ~help=?reactProps##help,
        ~wrapperCol=?reactProps##wrapperCol,
        ~labelCol=?reactProps##labelCol,
        ~label=?reactProps##label,
        ~id=?reactProps##id,
        ~className=?reactProps##className,
        ~prefixCls=?reactProps##prefixCls,
        reactProps##children,
      )
    );
  [@bs.obj]
  external makeProps:
    (
      ~children: 'children,
      ~prefixCls: 'prefixCls=?,
      ~className: 'className=?,
      ~id: 'id=?,
      ~label: 'label=?,
      ~labelCol: 'labelCol=?,
      ~wrapperCol: 'wrapperCol=?,
      ~help: 'help=?,
      ~extra: 'extra=?,
      ~validateStatus: 'validateStatus=?,
      ~hasFeedback: 'hasFeedback=?,
      ~required: 'required=?,
      ~style: 'style=?,
      ~colon: 'colon=?,
      unit
    ) =>
    {
      .
      "colon": option('colon),
      "style": option('style),
      "required": option('required),
      "hasFeedback": option('hasFeedback),
      "validateStatus": option('validateStatus),
      "extra": option('extra),
      "help": option('help),
      "wrapperCol": option('wrapperCol),
      "labelCol": option('labelCol),
      "label": option('label),
      "id": option('id),
      "className": option('className),
      "prefixCls": option('prefixCls),
      "children": 'children,
    } =
    "";
};

[@bs.obj]
external makeProps:
  (
    ~layout: string=?,
    ~onSubmit: ReactEvent.Form.t => unit=?,
    ~style: ReactDOMRe.Style.t=?,
    ~className: string=?,
    ~prefixCls: string=?,
    ~hideRequiredMark: bool=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~layout=?,
      ~onSubmit=?,
      ~style=?,
      ~className=?,
      ~prefixCls=?,
      ~hideRequiredMark=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~layout=?Js.Option.map((. b) => formLayoutToJs(b), layout),
        ~onSubmit?,
        ~style?,
        ~className?,
        ~prefixCls?,
        ~hideRequiredMark?,
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
        "hideRequiredMark": option('hideRequiredMark),
        "prefixCls": option('prefixCls),
        "className": option('className),
        "style": option('style),
        "onSubmit": option('onSubmit),
        "layout": option('layout),
        "children": 'children,
      },
    ) =>
    make(
      ~hideRequiredMark=?reactProps##hideRequiredMark,
      ~prefixCls=?reactProps##prefixCls,
      ~className=?reactProps##className,
      ~style=?reactProps##style,
      ~onSubmit=?reactProps##onSubmit,
      ~layout=?reactProps##layout,
      reactProps##children,
    )
  );
[@bs.obj]
external makeProps:
  (
    ~children: 'children,
    ~layout: 'layout=?,
    ~onSubmit: 'onSubmit=?,
    ~style: 'style=?,
    ~className: 'className=?,
    ~prefixCls: 'prefixCls=?,
    ~hideRequiredMark: 'hideRequiredMark=?,
    unit
  ) =>
  {
    .
    "hideRequiredMark": option('hideRequiredMark),
    "prefixCls": option('prefixCls),
    "className": option('className),
    "style": option('style),
    "onSubmit": option('onSubmit),
    "layout": option('layout),
    "children": 'children,
  } =
  "";
