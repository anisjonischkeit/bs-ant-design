[%bs.raw {|require("antd/lib/date-picker/style")|}];

[@bs.module]
external reactClass: ReasonReact.reactClass = "antd/lib/date-picker";

[@bs.deriving jsConverter]
type pickerSize = [ | `small | `default | `large];

type moment = MomentRe.Moment.t;

type boolOrProps(_) =
  | ShowTimeBool(bool): boolOrProps(bool)
  | ShowTimeProps(Antd_TimePicker.t('a))
    : boolOrProps(Antd_TimePicker.t('a));

let boolOrPropsToProp = (type a, boolOrProps: boolOrProps(a)): a =>
  switch (boolOrProps) {
  | ShowTimeBool(bool) => bool
  | ShowTimeProps(timePickerProps) => timePickerProps
  };

type t('a) = Js.t({. datePickerProps: int} as 'a);

[@bs.obj]
external makeProps:
  (
    ~showTime: 'a=?, /* TimePickerProps | boolean; */
    ~showToday: bool=?,
    ~_open: bool=?,
    ~disabledTime: moment => 'b=?, /* todo: (current: moment.Moment) => { disabledHours?: () => number[],disabledMinutes?: () => number[], disabledSeconds?: () => number[],}; */
    ~onOpenChange: bool => unit=?,
    ~onOk: moment => unit=?,
    ~placeholder: string=?,
    ~value: moment=?,
    ~defaultValue: moment=?,
    ~defaultPickerValue: moment=?,
    ~onChange: (moment, string) => unit=?,
    ~prefixCls: string=?,
    ~inputPrefixCls: string=?,
    ~format: string=?,
    ~disabled: bool=?,
    ~allowClear: bool=?,
    ~popupStyle: ReactDOMRe.Style.t=?,
    ~locale: 'c=?,
    ~size: string=?,
    ~renderExtraFooter: unit => ReasonReact.reactElement=?,
    ~getCalendarContainer: Dom.element => Dom.htmlElement=?,
    ~disabledDate: moment => bool=?,
    ~dateRender: (moment, moment) => ReasonReact.reactElement=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  t(_) =
  "";

let make =
    (
      ~showTime=?,
      ~showToday=?,
      ~_open=?,
      ~disabledTime=?,
      ~onOpenChange=?,
      ~onOk=?,
      ~placeholder=?,
      ~value=?,
      ~defaultValue=?,
      ~defaultPickerValue=?,
      ~onChange=?,
      ~prefixCls=?,
      ~inputPrefixCls=?,
      ~format=?,
      ~disabled=?,
      ~renderExtraFooter=?,
      ~allowClear=?,
      ~popupStyle=?,
      ~locale=?,
      ~size=?,
      ~getCalendarContainer=?,
      ~disabledDate=?,
      ~dateRender=?,
      ~id=?,
      ~className=?,
      ~style=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~showTime=?Js.Option.map((. b) => boolOrPropsToProp(b), showTime),
        ~showToday?,
        ~_open?,
        ~disabledTime?,
        ~onOpenChange?,
        ~onOk?,
        ~placeholder?,
        ~value?,
        ~defaultValue?,
        ~defaultPickerValue?,
        ~onChange?,
        ~prefixCls?,
        ~inputPrefixCls?,
        ~format?,
        ~disabled?,
        ~renderExtraFooter?,
        ~allowClear?,
        ~popupStyle?,
        ~locale?,
        ~size=?Js.Option.map((. b) => pickerSizeToJs(b), size),
        ~getCalendarContainer?,
        ~disabledDate?,
        ~dateRender?,
        ~id?,
        ~className?,
        ~style?,
        (),
      ),
    children,
  );

module RangePicker = {
  [@bs.module "antd/lib/date-picker"]
  external reactClass: ReasonReact.reactClass = "RangePicker";
  [@bs.deriving jsConverter]
  type rangePickerMode = [ | `time | `date | `month | `year | `decade];
  type t('a) = Js.t({. rangePickerProps: int} as 'a);
  [@bs.obj]
  external makeProps:
    (
      ~value: 'a=?,
      ~defaultValue: 'b=?,
      ~defaultPickerValue: 'c=?,
      ~onChange: ('d, (string, string)) => unit=?,
      ~onCalendarChange: ('e, (string, string)) => unit=?,
      ~onOk: moment => unit=?,
      ~showTime: 'f=?, /* TimePickerProps | boolean; */
      ~ranges: 'g=?, /* todo: {[range: string]: RangePickerPresetRange,}; */
      ~placeholder: (string, string)=?,
      ~mode: string=?,
      ~disabledTime: (moment, string) => 'h=?, /* todo: (current: moment.Moment, type: string) => { disabledHours?: () => number[],disabledMinutes?: () => number[], disabledSeconds?: () => number[],}; */
      ~onPanelChange: 'i=?, /* todo: onPanelChange?: (value?: RangePickerValue, mode?: string | string[]) => void;*/
      ~prefixCls: string=?,
      ~inputPrefixCls: string=?,
      ~format: string=?,
      ~disabled: bool=?,
      ~allowClear: bool=?,
      ~popupStyle: ReactDOMRe.Style.t=?,
      ~locale: 'j=?,
      ~size: string=?,
      ~getCalendarContainer: Dom.element => Dom.htmlElement=?,
      ~_open: bool=?,
      ~disabledDate: moment => bool=?,
      ~renderExtraFooter: unit => ReasonReact.reactElement=?,
      ~dateRender: (moment, moment) => ReasonReact.reactElement=?,
      ~id: string=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      unit
    ) =>
    t(_) =
    "";
  let make =
      (
        ~value=?,
        ~defaultValue=?,
        ~defaultPickerValue=?,
        ~onChange=?,
        ~onCalendarChange=?,
        ~onOk=?,
        ~showTime=?,
        ~ranges=?,
        ~placeholder=?,
        ~mode=?,
        ~disabledTime=?,
        ~onPanelChange=?,
        ~prefixCls=?,
        ~inputPrefixCls=?,
        ~format=?,
        ~disabled=?,
        ~allowClear=?,
        ~popupStyle=?,
        ~locale=?,
        ~size=?,
        ~getCalendarContainer=?,
        ~_open=?,
        ~disabledDate=?,
        ~renderExtraFooter=?,
        ~dateRender=?,
        ~id=?,
        ~className=?,
        ~style=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~onChange?,
          ~onCalendarChange?,
          ~ranges?,
          ~mode=?Js.Option.map((. b) => rangePickerModeToJs(b), mode),
          ~showTime=?Js.Option.map((. b) => boolOrPropsToProp(b), showTime),
          ~_open?,
          ~disabledTime?,
          ~onOk?,
          ~placeholder?,
          ~value?,
          ~defaultValue?,
          ~defaultPickerValue?,
          ~onPanelChange?,
          ~prefixCls?,
          ~inputPrefixCls?,
          ~format?,
          ~disabled?,
          ~renderExtraFooter?,
          ~allowClear?,
          ~popupStyle?,
          ~locale?,
          ~size=?Js.Option.map((. b) => pickerSizeToJs(b), size),
          ~getCalendarContainer?,
          ~disabledDate?,
          ~dateRender?,
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
          "dateRender": option('dateRender),
          "renderExtraFooter": option('renderExtraFooter),
          "disabledDate": option('disabledDate),
          "_open": option('T_open),
          "getCalendarContainer": option('getCalendarContainer),
          "size": option('size),
          "locale": option('locale),
          "popupStyle": option('popupStyle),
          "allowClear": option('allowClear),
          "disabled": option('disabled),
          "format": option('format),
          "inputPrefixCls": option('inputPrefixCls),
          "prefixCls": option('prefixCls),
          "onPanelChange": option('onPanelChange),
          "disabledTime": option('disabledTime),
          "mode": option('mode),
          "placeholder": option('placeholder),
          "ranges": option('ranges),
          "showTime": option('showTime),
          "onOk": option('onOk),
          "onCalendarChange": option('onCalendarChange),
          "onChange": option('onChange),
          "defaultPickerValue": option('defaultPickerValue),
          "defaultValue": option('defaultValue),
          "value": option('value),
          "children": 'children,
        },
      ) =>
      make(
        ~style=?reactProps##style,
        ~className=?reactProps##className,
        ~id=?reactProps##id,
        ~dateRender=?reactProps##dateRender,
        ~renderExtraFooter=?reactProps##renderExtraFooter,
        ~disabledDate=?reactProps##disabledDate,
        ~_open=?reactProps##_open,
        ~getCalendarContainer=?reactProps##getCalendarContainer,
        ~size=?reactProps##size,
        ~locale=?reactProps##locale,
        ~popupStyle=?reactProps##popupStyle,
        ~allowClear=?reactProps##allowClear,
        ~disabled=?reactProps##disabled,
        ~format=?reactProps##format,
        ~inputPrefixCls=?reactProps##inputPrefixCls,
        ~prefixCls=?reactProps##prefixCls,
        ~onPanelChange=?reactProps##onPanelChange,
        ~disabledTime=?reactProps##disabledTime,
        ~mode=?reactProps##mode,
        ~placeholder=?reactProps##placeholder,
        ~ranges=?reactProps##ranges,
        ~showTime=?reactProps##showTime,
        ~onOk=?reactProps##onOk,
        ~onCalendarChange=?reactProps##onCalendarChange,
        ~onChange=?reactProps##onChange,
        ~defaultPickerValue=?reactProps##defaultPickerValue,
        ~defaultValue=?reactProps##defaultValue,
        ~value=?reactProps##value,
        reactProps##children,
      )
    );
  [@bs.obj]
  external makeProps:
    (
      ~children: 'children,
      ~value: 'value=?,
      ~defaultValue: 'defaultValue=?,
      ~defaultPickerValue: 'defaultPickerValue=?,
      ~onChange: 'onChange=?,
      ~onCalendarChange: 'onCalendarChange=?,
      ~onOk: 'onOk=?,
      ~showTime: 'showTime=?,
      ~ranges: 'ranges=?,
      ~placeholder: 'placeholder=?,
      ~mode: 'mode=?,
      ~disabledTime: 'disabledTime=?,
      ~onPanelChange: 'onPanelChange=?,
      ~prefixCls: 'prefixCls=?,
      ~inputPrefixCls: 'inputPrefixCls=?,
      ~format: 'format=?,
      ~disabled: 'disabled=?,
      ~allowClear: 'allowClear=?,
      ~popupStyle: 'popupStyle=?,
      ~locale: 'locale=?,
      ~size: 'size=?,
      ~getCalendarContainer: 'getCalendarContainer=?,
      ~_open: 'T_open=?,
      ~disabledDate: 'disabledDate=?,
      ~renderExtraFooter: 'renderExtraFooter=?,
      ~dateRender: 'dateRender=?,
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
      "dateRender": option('dateRender),
      "renderExtraFooter": option('renderExtraFooter),
      "disabledDate": option('disabledDate),
      "_open": option('T_open),
      "getCalendarContainer": option('getCalendarContainer),
      "size": option('size),
      "locale": option('locale),
      "popupStyle": option('popupStyle),
      "allowClear": option('allowClear),
      "disabled": option('disabled),
      "format": option('format),
      "inputPrefixCls": option('inputPrefixCls),
      "prefixCls": option('prefixCls),
      "onPanelChange": option('onPanelChange),
      "disabledTime": option('disabledTime),
      "mode": option('mode),
      "placeholder": option('placeholder),
      "ranges": option('ranges),
      "showTime": option('showTime),
      "onOk": option('onOk),
      "onCalendarChange": option('onCalendarChange),
      "onChange": option('onChange),
      "defaultPickerValue": option('defaultPickerValue),
      "defaultValue": option('defaultValue),
      "value": option('value),
      "children": 'children,
    } =
    "";
};

module MonthPicker = {
  [@bs.module "antd/lib/date-picker"]
  external reactClass: ReasonReact.reactClass = "MonthPicker";
  type t('a) = Js.t({. monthPickerProps: int} as 'a);
  [@bs.obj]
  external makeProps:
    (
      ~_open: bool=?,
      ~onOpenChange: bool => unit=?,
      ~placeholder: string=?,
      ~monthCellContentRender: (moment, 'a) => ReasonReact.reactElement=?, /* not in interface.tsx */
      ~value: moment=?,
      ~defaultValue: moment=?,
      ~defaultPickerValue: moment=?,
      ~onChange: (moment, string) => unit=?,
      ~prefixCls: string=?,
      ~inputPrefixCls: string=?,
      ~format: string=?,
      ~disabled: bool=?,
      ~allowClear: bool=?,
      ~popupStyle: ReactDOMRe.Style.t=?,
      ~locale: 'c=?,
      ~size: string=?,
      ~renderExtraFooter: unit => ReasonReact.reactElement=?,
      ~getCalendarContainer: Dom.element => Dom.htmlElement=?,
      ~disabledDate: moment => bool=?,
      ~dateRender: (moment, moment) => ReasonReact.reactElement=?,
      ~id: string=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      unit
    ) =>
    t(_) =
    "";
  let make =
      (
        ~_open=?,
        ~onOpenChange=?,
        ~placeholder=?,
        ~monthCellContentRender=?,
        ~value=?,
        ~defaultValue=?,
        ~defaultPickerValue=?,
        ~onChange=?,
        ~prefixCls=?,
        ~inputPrefixCls=?,
        ~format=?,
        ~disabled=?,
        ~allowClear=?,
        ~popupStyle=?,
        ~locale=?,
        ~size=?,
        ~getCalendarContainer=?,
        ~disabledDate=?,
        ~renderExtraFooter=?,
        ~dateRender=?,
        ~id=?,
        ~className=?,
        ~style=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~onChange?,
          ~onOpenChange?,
          ~_open?,
          ~placeholder?,
          ~monthCellContentRender?,
          ~value?,
          ~defaultValue?,
          ~defaultPickerValue?,
          ~prefixCls?,
          ~inputPrefixCls?,
          ~format?,
          ~disabled?,
          ~renderExtraFooter?,
          ~allowClear?,
          ~popupStyle?,
          ~locale?,
          ~size=?Js.Option.map((. b) => pickerSizeToJs(b), size),
          ~getCalendarContainer?,
          ~disabledDate?,
          ~dateRender?,
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
          "dateRender": option('dateRender),
          "renderExtraFooter": option('renderExtraFooter),
          "disabledDate": option('disabledDate),
          "getCalendarContainer": option('getCalendarContainer),
          "size": option('size),
          "locale": option('locale),
          "popupStyle": option('popupStyle),
          "allowClear": option('allowClear),
          "disabled": option('disabled),
          "format": option('format),
          "inputPrefixCls": option('inputPrefixCls),
          "prefixCls": option('prefixCls),
          "onChange": option('onChange),
          "defaultPickerValue": option('defaultPickerValue),
          "defaultValue": option('defaultValue),
          "value": option('value),
          "monthCellContentRender": option('monthCellContentRender),
          "placeholder": option('placeholder),
          "onOpenChange": option('onOpenChange),
          "_open": option('T_open),
          "children": 'children,
        },
      ) =>
      make(
        ~style=?reactProps##style,
        ~className=?reactProps##className,
        ~id=?reactProps##id,
        ~dateRender=?reactProps##dateRender,
        ~renderExtraFooter=?reactProps##renderExtraFooter,
        ~disabledDate=?reactProps##disabledDate,
        ~getCalendarContainer=?reactProps##getCalendarContainer,
        ~size=?reactProps##size,
        ~locale=?reactProps##locale,
        ~popupStyle=?reactProps##popupStyle,
        ~allowClear=?reactProps##allowClear,
        ~disabled=?reactProps##disabled,
        ~format=?reactProps##format,
        ~inputPrefixCls=?reactProps##inputPrefixCls,
        ~prefixCls=?reactProps##prefixCls,
        ~onChange=?reactProps##onChange,
        ~defaultPickerValue=?reactProps##defaultPickerValue,
        ~defaultValue=?reactProps##defaultValue,
        ~value=?reactProps##value,
        ~monthCellContentRender=?reactProps##monthCellContentRender,
        ~placeholder=?reactProps##placeholder,
        ~onOpenChange=?reactProps##onOpenChange,
        ~_open=?reactProps##_open,
        reactProps##children,
      )
    );
  [@bs.obj]
  external makeProps:
    (
      ~children: 'children,
      ~_open: 'T_open=?,
      ~onOpenChange: 'onOpenChange=?,
      ~placeholder: 'placeholder=?,
      ~monthCellContentRender: 'monthCellContentRender=?,
      ~value: 'value=?,
      ~defaultValue: 'defaultValue=?,
      ~defaultPickerValue: 'defaultPickerValue=?,
      ~onChange: 'onChange=?,
      ~prefixCls: 'prefixCls=?,
      ~inputPrefixCls: 'inputPrefixCls=?,
      ~format: 'format=?,
      ~disabled: 'disabled=?,
      ~allowClear: 'allowClear=?,
      ~popupStyle: 'popupStyle=?,
      ~locale: 'locale=?,
      ~size: 'size=?,
      ~getCalendarContainer: 'getCalendarContainer=?,
      ~disabledDate: 'disabledDate=?,
      ~renderExtraFooter: 'renderExtraFooter=?,
      ~dateRender: 'dateRender=?,
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
      "dateRender": option('dateRender),
      "renderExtraFooter": option('renderExtraFooter),
      "disabledDate": option('disabledDate),
      "getCalendarContainer": option('getCalendarContainer),
      "size": option('size),
      "locale": option('locale),
      "popupStyle": option('popupStyle),
      "allowClear": option('allowClear),
      "disabled": option('disabled),
      "format": option('format),
      "inputPrefixCls": option('inputPrefixCls),
      "prefixCls": option('prefixCls),
      "onChange": option('onChange),
      "defaultPickerValue": option('defaultPickerValue),
      "defaultValue": option('defaultValue),
      "value": option('value),
      "monthCellContentRender": option('monthCellContentRender),
      "placeholder": option('placeholder),
      "onOpenChange": option('onOpenChange),
      "_open": option('T_open),
      "children": 'children,
    } =
    "";
};

module WeekPicker = {
  [@bs.module "antd/lib/date-picker"]
  external reactClass: ReasonReact.reactClass = "WeekPicker";
  type t('a) = Js.t({. weekPickerProps: int} as 'a);
  [@bs.obj]
  external makeProps:
    (
      ~_open: bool=?,
      ~onOpenChange: bool => unit=?,
      ~placeholder: string=?,
      ~value: moment=?,
      ~defaultValue: moment=?,
      ~defaultPickerValue: moment=?,
      ~onChange: (moment, string) => unit=?,
      ~prefixCls: string=?,
      ~inputPrefixCls: string=?,
      ~format: string=?,
      ~disabled: bool=?,
      ~allowClear: bool=?,
      ~popupStyle: ReactDOMRe.Style.t=?,
      ~locale: 'c=?,
      ~size: string=?,
      ~renderExtraFooter: unit => ReasonReact.reactElement=?,
      ~getCalendarContainer: Dom.element => Dom.htmlElement=?,
      ~disabledDate: moment => bool=?,
      ~dateRender: (moment, moment) => ReasonReact.reactElement=?,
      ~id: string=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      unit
    ) =>
    t(_) =
    "";
  let make =
      (
        ~_open=?,
        ~onOpenChange=?,
        ~placeholder=?,
        ~value=?,
        ~defaultValue=?,
        ~defaultPickerValue=?,
        ~onChange=?,
        ~prefixCls=?,
        ~inputPrefixCls=?,
        ~format=?,
        ~disabled=?,
        ~allowClear=?,
        ~popupStyle=?,
        ~locale=?,
        ~size=?,
        ~getCalendarContainer=?,
        ~disabledDate=?,
        ~renderExtraFooter=?,
        ~dateRender=?,
        ~id=?,
        ~className=?,
        ~style=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~onChange?,
          ~onOpenChange?,
          ~_open?,
          ~placeholder?,
          ~value?,
          ~defaultValue?,
          ~defaultPickerValue?,
          ~prefixCls?,
          ~inputPrefixCls?,
          ~format?,
          ~disabled?,
          ~renderExtraFooter?,
          ~allowClear?,
          ~popupStyle?,
          ~locale?,
          ~size=?Js.Option.map((. b) => pickerSizeToJs(b), size),
          ~getCalendarContainer?,
          ~disabledDate?,
          ~dateRender?,
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
          "dateRender": option('dateRender),
          "renderExtraFooter": option('renderExtraFooter),
          "disabledDate": option('disabledDate),
          "getCalendarContainer": option('getCalendarContainer),
          "size": option('size),
          "locale": option('locale),
          "popupStyle": option('popupStyle),
          "allowClear": option('allowClear),
          "disabled": option('disabled),
          "format": option('format),
          "inputPrefixCls": option('inputPrefixCls),
          "prefixCls": option('prefixCls),
          "onChange": option('onChange),
          "defaultPickerValue": option('defaultPickerValue),
          "defaultValue": option('defaultValue),
          "value": option('value),
          "placeholder": option('placeholder),
          "onOpenChange": option('onOpenChange),
          "_open": option('T_open),
          "children": 'children,
        },
      ) =>
      make(
        ~style=?reactProps##style,
        ~className=?reactProps##className,
        ~id=?reactProps##id,
        ~dateRender=?reactProps##dateRender,
        ~renderExtraFooter=?reactProps##renderExtraFooter,
        ~disabledDate=?reactProps##disabledDate,
        ~getCalendarContainer=?reactProps##getCalendarContainer,
        ~size=?reactProps##size,
        ~locale=?reactProps##locale,
        ~popupStyle=?reactProps##popupStyle,
        ~allowClear=?reactProps##allowClear,
        ~disabled=?reactProps##disabled,
        ~format=?reactProps##format,
        ~inputPrefixCls=?reactProps##inputPrefixCls,
        ~prefixCls=?reactProps##prefixCls,
        ~onChange=?reactProps##onChange,
        ~defaultPickerValue=?reactProps##defaultPickerValue,
        ~defaultValue=?reactProps##defaultValue,
        ~value=?reactProps##value,
        ~placeholder=?reactProps##placeholder,
        ~onOpenChange=?reactProps##onOpenChange,
        ~_open=?reactProps##_open,
        reactProps##children,
      )
    );
  [@bs.obj]
  external makeProps:
    (
      ~children: 'children,
      ~_open: 'T_open=?,
      ~onOpenChange: 'onOpenChange=?,
      ~placeholder: 'placeholder=?,
      ~value: 'value=?,
      ~defaultValue: 'defaultValue=?,
      ~defaultPickerValue: 'defaultPickerValue=?,
      ~onChange: 'onChange=?,
      ~prefixCls: 'prefixCls=?,
      ~inputPrefixCls: 'inputPrefixCls=?,
      ~format: 'format=?,
      ~disabled: 'disabled=?,
      ~allowClear: 'allowClear=?,
      ~popupStyle: 'popupStyle=?,
      ~locale: 'locale=?,
      ~size: 'size=?,
      ~getCalendarContainer: 'getCalendarContainer=?,
      ~disabledDate: 'disabledDate=?,
      ~renderExtraFooter: 'renderExtraFooter=?,
      ~dateRender: 'dateRender=?,
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
      "dateRender": option('dateRender),
      "renderExtraFooter": option('renderExtraFooter),
      "disabledDate": option('disabledDate),
      "getCalendarContainer": option('getCalendarContainer),
      "size": option('size),
      "locale": option('locale),
      "popupStyle": option('popupStyle),
      "allowClear": option('allowClear),
      "disabled": option('disabled),
      "format": option('format),
      "inputPrefixCls": option('inputPrefixCls),
      "prefixCls": option('prefixCls),
      "onChange": option('onChange),
      "defaultPickerValue": option('defaultPickerValue),
      "defaultValue": option('defaultValue),
      "value": option('value),
      "placeholder": option('placeholder),
      "onOpenChange": option('onOpenChange),
      "_open": option('T_open),
      "children": 'children,
    } =
    "";
};

module Locale = {
  module Lang = {
    [@bs.deriving abstract]
    type t =
      pri {
        placeholder: string,
        rangePlaceholder: array(string),
        today: string,
        now: string,
        backToToday: string,
        ok: string,
        clear: string,
        month: string,
        year: string,
        timeSelect: string,
        dateSelect: string,
        weekSelect: string,
        monthSelect: string,
        yearSelect: string,
        decadeSelect: string,
        yearFormat: string,
        dateFormat: string,
        dayFormat: string,
        dateTimeFormat: string,
        monthBeforeYear: bool,
        previousMonth: string,
        nextMonth: string,
        previousYear: string,
        nextYear: string,
        previousDecade: string,
        nextDecade: string,
        previousCentury: string,
        nextCentury: string,
      };
  };

  [@bs.deriving abstract]
  type t =
    pri {
      lang: Lang.t,
      timePickerLocale: Antd_TimePicker.Locale.t,
    };
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
        "dateRender": option('dateRender),
        "disabledDate": option('disabledDate),
        "getCalendarContainer": option('getCalendarContainer),
        "size": option('size),
        "locale": option('locale),
        "popupStyle": option('popupStyle),
        "allowClear": option('allowClear),
        "renderExtraFooter": option('renderExtraFooter),
        "disabled": option('disabled),
        "format": option('format),
        "inputPrefixCls": option('inputPrefixCls),
        "prefixCls": option('prefixCls),
        "onChange": option('onChange),
        "defaultPickerValue": option('defaultPickerValue),
        "defaultValue": option('defaultValue),
        "value": option('value),
        "placeholder": option('placeholder),
        "onOk": option('onOk),
        "onOpenChange": option('onOpenChange),
        "disabledTime": option('disabledTime),
        "_open": option('T_open),
        "showToday": option('showToday),
        "showTime": option('showTime),
        "children": 'children,
      },
    ) =>
    make(
      ~style=?reactProps##style,
      ~className=?reactProps##className,
      ~id=?reactProps##id,
      ~dateRender=?reactProps##dateRender,
      ~disabledDate=?reactProps##disabledDate,
      ~getCalendarContainer=?reactProps##getCalendarContainer,
      ~size=?reactProps##size,
      ~locale=?reactProps##locale,
      ~popupStyle=?reactProps##popupStyle,
      ~allowClear=?reactProps##allowClear,
      ~renderExtraFooter=?reactProps##renderExtraFooter,
      ~disabled=?reactProps##disabled,
      ~format=?reactProps##format,
      ~inputPrefixCls=?reactProps##inputPrefixCls,
      ~prefixCls=?reactProps##prefixCls,
      ~onChange=?reactProps##onChange,
      ~defaultPickerValue=?reactProps##defaultPickerValue,
      ~defaultValue=?reactProps##defaultValue,
      ~value=?reactProps##value,
      ~placeholder=?reactProps##placeholder,
      ~onOk=?reactProps##onOk,
      ~onOpenChange=?reactProps##onOpenChange,
      ~disabledTime=?reactProps##disabledTime,
      ~_open=?reactProps##_open,
      ~showToday=?reactProps##showToday,
      ~showTime=?reactProps##showTime,
      reactProps##children,
    )
  );
[@bs.obj]
external makeProps:
  (
    ~children: 'children,
    ~showTime: 'showTime=?,
    ~showToday: 'showToday=?,
    ~_open: 'T_open=?,
    ~disabledTime: 'disabledTime=?,
    ~onOpenChange: 'onOpenChange=?,
    ~onOk: 'onOk=?,
    ~placeholder: 'placeholder=?,
    ~value: 'value=?,
    ~defaultValue: 'defaultValue=?,
    ~defaultPickerValue: 'defaultPickerValue=?,
    ~onChange: 'onChange=?,
    ~prefixCls: 'prefixCls=?,
    ~inputPrefixCls: 'inputPrefixCls=?,
    ~format: 'format=?,
    ~disabled: 'disabled=?,
    ~renderExtraFooter: 'renderExtraFooter=?,
    ~allowClear: 'allowClear=?,
    ~popupStyle: 'popupStyle=?,
    ~locale: 'locale=?,
    ~size: 'size=?,
    ~getCalendarContainer: 'getCalendarContainer=?,
    ~disabledDate: 'disabledDate=?,
    ~dateRender: 'dateRender=?,
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
    "dateRender": option('dateRender),
    "disabledDate": option('disabledDate),
    "getCalendarContainer": option('getCalendarContainer),
    "size": option('size),
    "locale": option('locale),
    "popupStyle": option('popupStyle),
    "allowClear": option('allowClear),
    "renderExtraFooter": option('renderExtraFooter),
    "disabled": option('disabled),
    "format": option('format),
    "inputPrefixCls": option('inputPrefixCls),
    "prefixCls": option('prefixCls),
    "onChange": option('onChange),
    "defaultPickerValue": option('defaultPickerValue),
    "defaultValue": option('defaultValue),
    "value": option('value),
    "placeholder": option('placeholder),
    "onOk": option('onOk),
    "onOpenChange": option('onOpenChange),
    "disabledTime": option('disabledTime),
    "_open": option('T_open),
    "showToday": option('showToday),
    "showTime": option('showTime),
    "children": 'children,
  } =
  "";

/*export interface DatePickerProps extends PickerProps, SinglePickerProps*/

/*export interface SinglePickerProps*/

/*export interface PickerProps*/

/* it is using rc-calendar internally and just passing the mode to it. */
/* enum('time', 'date', 'month', 'year', 'decade') */

/*export interface RangePickerProps extends PickerProps*/

/*export interface PickerProps*/

/*export interface MonthPickerProps extends PickerProps, SinglePickerProps*/

/*export interface SinglePickerProps*/

/*export interface PickerProps*/

/*export interface WeekPickerProps extends PickerProps, SinglePickerProps*/

/*export interface SinglePickerProps*/

/*export interface PickerProps*/

/*
 [@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/date-picker";

 [%bs.raw {|require("antd/lib/date-picker/style")|}];


  COMMON
  --------------------
  allowClear	Whether to show clear button	boolean	true
  autoFocus	get focus when component mounted	boolean	false
  className	picker className	string	''
  dateRender	custom rendering function for date cells	function(currentDate: moment, today: moment) => React.ReactNode	-
  disabled	determine whether the DatePicker is disabled	boolean	false
  disabledDate	specify the date that cannot be selected	(currentDate: moment) => boolean	-
  dropdownClassName	to customize the className of the popup calendar	string	-
  getCalendarContainer	to set the container of the floating layer, while the default is to create a div element in body	function(trigger)	-
  locale	localization configuration	object	default
  mode	picker panel mode	time|date|month|year	'date'
  open	open state of picker	boolean	-
  placeholder	placeholder of date input	string|RangePicker[]	-
  popupStyle	to customize the style of the popup calendar	object	{}
  size	determine the size of the input box, the height of large and small, are 40px and 24px respectively, while default size is 32px	string	-
  style	to customize the style of the input box	object	{}
  onOpenChange	a callback function, can be executed whether the popup calendar is popped up or closed	function(status)	-
  onPanelChange	callback when picker panel mode is changed	function(value, mode)
  */

/*
 defaultValue	to set default date	moment	-
 disabledTime	to specify the time that cannot be selected	function(date)	-
 format	to set the date format, refer to moment.js	string	"YYYY-MM-DD"
 renderExtraFooter	render extra footer in panel	() => React.ReactNode	-
 showTime	to provide an additional time selection	object|boolean	TimePicker Options
 showTime.defaultValue	to set default time of selected date, demo	moment	moment()
 showToday	whether to show "Today" button	boolean	true
 value	to set date	moment	-
 onCalendarChange	a callback function, can be executed when the start time or the end time of the range is changing	function(dates: moment, moment, dateStrings: string, string)	?
 onChange	a callback function, can be executed when the selected time is changing	function(date: moment, dateString: string)	-
 onOk	callback when click ok button	function()	-
 */
/*
 [@bs.deriving jsConverter]
 type mode = [ | `time | `date | `month | `year];

 [@bs.obj]
 external makeProps:
   (
     ~allowClear: bool=?,
     ~allowFocus: bool=?,
     ~className: string=?,
     ~dateRender: array(string) => unit=?,
     ~disabled: bool=?,
     ~disabledDate: string => unit=?,
     ~dropdownClassName: string=?,
     ~getCalendarContainer: string=?,
     ~locale: string=?,
     ~mode: string=?,
     ~_open: bool=?,
     ~placeholder: string=?,
     ~popupStyle: ReactDOMRe.Style.t=?,
     ~size: string=?,
     ~style: ReactDOMRe.Style.t=?,
     ~onOpenChange: array(string) => unit=?,
     ~onPanelChange: array(string) => unit=?,
     ~defaultValue: string=?,
     ~disabledTime: string => unit=?,
     ~format: string=?,
     ~renderExtraFooter: string => unit=?,
     ~showTime: bool=?,
     ~showTimeDefaultValue: string=?,
     ~showToday: bool=?,
     ~value: string=?,
     ~onCalendarChange: array(string) => unit=?,
     ~onChange: array(string) => unit=?,
     ~onOk: array(string) => unit=?,
     ~id: string=?,
     unit
   ) =>
   _ =
   "";

 let make =
     (
       ~allowFocus=?,
       ~className=?,
       ~dateRender=?,
       ~disabled=?,
       ~disabledDate=?,
       ~dropdownClassName=?,
       ~getCalendarContainer=?,
       ~locale=?,
       ~mode=?,
       ~_open=?,
       ~placeholder=?,
       ~popupStyle=?,
       ~size=?,
       ~style=?,
       ~onOpenChange=?,
       ~onPanelChange=?,
       ~defaultValue=?,
       ~disabledTime=?,
       ~format=?,
       ~renderExtraFooter=?,
       ~showTime=?,
       ~showTimeDefaultValue=?,
       ~showToday=?,
       ~value=?,
       ~onCalendarChange=?,
       ~onChange=?,
       ~onOk=?,
       ~id=?,
       children,
     ) =>
   ReasonReact.wrapJsForReason(
     ~reactClass,
     ~props=
       makeProps(
         ~allowFocus?,
         ~className?,
         ~dateRender?,
         ~disabled?,
         ~disabledDate?,
         ~dropdownClassName?,
         ~getCalendarContainer?,
         ~locale?,
         ~mode=?Js.Option.map((. b) => modeToJs(b), mode),
         ~_open?,
         ~placeholder?,
         ~popupStyle?,
         ~size?,
         ~style?,
         ~onOpenChange?,
         ~onPanelChange?,
         ~defaultValue?,
         ~disabledTime?,
         ~format?,
         ~renderExtraFooter?,
         ~showTime?,
         ~showTimeDefaultValue?,
         ~showToday?,
         ~value?,
         ~onCalendarChange?,
         ~onChange?,
         ~onOk?,
         ~id?,
         (),
       ),
     children,
   );


 */
