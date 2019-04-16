[%bs.raw {|require("antd/lib/time-picker/style")|}];

[@bs.module "antd/lib/time-picker"]
external reactClass: ReasonReact.reactClass = "default";

type moment = MomentRe.Moment.t;

[@bs.deriving jsConverter]
type pickerSize = [ | `small | `default | `large];

type t('a) = Js.t({. timePickerProps: int} as 'a);

[@bs.obj]
external makeProps:
  (
    ~size: string=?,
    ~value: moment=?,
    ~defaultValue: moment=?,
    ~_open: bool=?,
    ~format: string=?,
    ~onChange: (moment, string) => unit=?,
    ~onOpenChange: bool => unit=?,
    ~disabled: bool=?,
    ~placeholder: string=?,
    ~prefixCls: string=?,
    ~hideDisabledOptions: bool=?,
    ~disabledHours: unit => array(int)=?,
    ~disabledMinutes: int => array(int)=?,
    ~disabledSeconds: (int, int) => array(int)=?,
    ~getPopupContainer: Dom.element => Dom.htmlElement=?,
    ~addon: 'a=?,
    ~use12Hours: bool=?,
    ~focusOnOpen: bool=?,
    ~hourStep: int=?,
    ~minuteStep: int=?,
    ~secondStep: int=?,
    ~allowEmpty: bool=?,
    ~clearText: bool=?,
    ~defaultOpenValue: moment=?,
    ~popupClassName: string=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  t(_) =
  "";

let make =
    (
      ~size=?,
      ~value=?,
      ~defaultValue=?,
      ~_open=?,
      ~format=?,
      ~onChange=?,
      ~onOpenChange=?,
      ~disabled=?,
      ~placeholder=?,
      ~prefixCls=?,
      ~hideDisabledOptions=?,
      ~disabledHours=?,
      ~disabledMinutes=?,
      ~disabledSeconds=?,
      ~getPopupContainer=?,
      ~addon=?,
      ~use12Hours=?,
      ~focusOnOpen=?,
      ~hourStep=?,
      ~minuteStep=?,
      ~secondStep=?,
      ~allowEmpty=?,
      ~clearText=?,
      ~defaultOpenValue=?,
      ~popupClassName=?,
      ~id=?,
      ~className=?,
      ~style=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~size=?Js.Option.map((. b) => pickerSizeToJs(b), size),
        ~value?,
        ~defaultValue?,
        ~_open?,
        ~format?,
        ~onChange?,
        ~onOpenChange?,
        ~disabled?,
        ~placeholder?,
        ~prefixCls?,
        ~hideDisabledOptions?,
        ~disabledHours?,
        ~disabledMinutes?,
        ~disabledSeconds?,
        ~getPopupContainer?,
        ~addon?,
        ~use12Hours?,
        ~focusOnOpen?,
        ~hourStep?,
        ~minuteStep?,
        ~secondStep?,
        ~allowEmpty?,
        ~clearText?,
        ~defaultOpenValue?,
        ~popupClassName?,
        ~id?,
        ~className?,
        ~style?,
        (),
      ),
    children,
  );

module Locale = {
  [@bs.deriving abstract]
  type t = pri {placeholder: string};
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
        "popupClassName": option('popupClassName),
        "defaultOpenValue": option('defaultOpenValue),
        "clearText": option('clearText),
        "allowEmpty": option('allowEmpty),
        "secondStep": option('secondStep),
        "minuteStep": option('minuteStep),
        "hourStep": option('hourStep),
        "focusOnOpen": option('focusOnOpen),
        "use12Hours": option('use12Hours),
        "addon": option('addon),
        "getPopupContainer": option('getPopupContainer),
        "disabledSeconds": option('disabledSeconds),
        "disabledMinutes": option('disabledMinutes),
        "disabledHours": option('disabledHours),
        "hideDisabledOptions": option('hideDisabledOptions),
        "prefixCls": option('prefixCls),
        "placeholder": option('placeholder),
        "disabled": option('disabled),
        "onOpenChange": option('onOpenChange),
        "onChange": option('onChange),
        "format": option('format),
        "_open": option('T_open),
        "defaultValue": option('defaultValue),
        "value": option('value),
        "size": option('size),
        "children": 'children,
      },
    ) =>
    make(
      ~style=?reactProps##style,
      ~className=?reactProps##className,
      ~id=?reactProps##id,
      ~popupClassName=?reactProps##popupClassName,
      ~defaultOpenValue=?reactProps##defaultOpenValue,
      ~clearText=?reactProps##clearText,
      ~allowEmpty=?reactProps##allowEmpty,
      ~secondStep=?reactProps##secondStep,
      ~minuteStep=?reactProps##minuteStep,
      ~hourStep=?reactProps##hourStep,
      ~focusOnOpen=?reactProps##focusOnOpen,
      ~use12Hours=?reactProps##use12Hours,
      ~addon=?reactProps##addon,
      ~getPopupContainer=?reactProps##getPopupContainer,
      ~disabledSeconds=?reactProps##disabledSeconds,
      ~disabledMinutes=?reactProps##disabledMinutes,
      ~disabledHours=?reactProps##disabledHours,
      ~hideDisabledOptions=?reactProps##hideDisabledOptions,
      ~prefixCls=?reactProps##prefixCls,
      ~placeholder=?reactProps##placeholder,
      ~disabled=?reactProps##disabled,
      ~onOpenChange=?reactProps##onOpenChange,
      ~onChange=?reactProps##onChange,
      ~format=?reactProps##format,
      ~_open=?reactProps##_open,
      ~defaultValue=?reactProps##defaultValue,
      ~value=?reactProps##value,
      ~size=?reactProps##size,
      reactProps##children,
    )
  );
[@bs.obj]
external makeProps:
  (
    ~children: 'children,
    ~size: 'size=?,
    ~value: 'value=?,
    ~defaultValue: 'defaultValue=?,
    ~_open: 'T_open=?,
    ~format: 'format=?,
    ~onChange: 'onChange=?,
    ~onOpenChange: 'onOpenChange=?,
    ~disabled: 'disabled=?,
    ~placeholder: 'placeholder=?,
    ~prefixCls: 'prefixCls=?,
    ~hideDisabledOptions: 'hideDisabledOptions=?,
    ~disabledHours: 'disabledHours=?,
    ~disabledMinutes: 'disabledMinutes=?,
    ~disabledSeconds: 'disabledSeconds=?,
    ~getPopupContainer: 'getPopupContainer=?,
    ~addon: 'addon=?,
    ~use12Hours: 'use12Hours=?,
    ~focusOnOpen: 'focusOnOpen=?,
    ~hourStep: 'hourStep=?,
    ~minuteStep: 'minuteStep=?,
    ~secondStep: 'secondStep=?,
    ~allowEmpty: 'allowEmpty=?,
    ~clearText: 'clearText=?,
    ~defaultOpenValue: 'defaultOpenValue=?,
    ~popupClassName: 'popupClassName=?,
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
    "popupClassName": option('popupClassName),
    "defaultOpenValue": option('defaultOpenValue),
    "clearText": option('clearText),
    "allowEmpty": option('allowEmpty),
    "secondStep": option('secondStep),
    "minuteStep": option('minuteStep),
    "hourStep": option('hourStep),
    "focusOnOpen": option('focusOnOpen),
    "use12Hours": option('use12Hours),
    "addon": option('addon),
    "getPopupContainer": option('getPopupContainer),
    "disabledSeconds": option('disabledSeconds),
    "disabledMinutes": option('disabledMinutes),
    "disabledHours": option('disabledHours),
    "hideDisabledOptions": option('hideDisabledOptions),
    "prefixCls": option('prefixCls),
    "placeholder": option('placeholder),
    "disabled": option('disabled),
    "onOpenChange": option('onOpenChange),
    "onChange": option('onChange),
    "format": option('format),
    "_open": option('T_open),
    "defaultValue": option('defaultValue),
    "value": option('value),
    "size": option('size),
    "children": 'children,
  } =
  "";

/*
 [@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/time-picker";

 [%bs.raw {|require("antd/lib/time-picker/style")|}];

 [@bs.obj]
 external makeProps:
   (
     ~addon: ReasonReact.reactElement=?,
     ~allowEmpty: bool=?,
     ~autoFocus: bool=?,
     ~className: string=?,
     ~clearText: string=?,
     ~defaultOpenValue: string=?,
     ~defaultValue: string=?,
     ~disabled: bool=?,
     ~disabledHours: string => unit=?,
     ~disabledMinutes: string => unit=?,
     ~disabledSeconds: string => unit=?,
     ~format: string=?,
     ~getPopupContainer: string=?,
     ~hideDisabledOptions: bool=?,
     ~hourStep: int=?,
     ~inputReadOnly: bool=?,
     ~minuteStep: int=?,
     ~open_: bool=?,
     ~placeholder: string=?,
     ~popupClassName: string=?,
     ~secondStep: int=?,
     ~use12Hours: bool=?,
     ~value: string=?,
     ~onChange: (string, string) => unit=?,
     ~onOpenChange: bool => unit=?,
     ~id: string=?,
     ~style: ReactDOMRe.Style.t=?,
     unit
   ) =>
   _ =
   "";

 let make =
     (
       ~addon=?,
       ~allowEmpty=?,
       ~autoFocus=?,
       ~className=?,
       ~clearText=?,
       ~defaultOpenValue=?,
       ~defaultValue=?,
       ~disabled=?,
       ~disabledHours=?,
       ~disabledMinutes=?,
       ~disabledSeconds=?,
       ~format=?,
       ~getPopupContainer=?,
       ~hideDisabledOptions=?,
       ~hourStep=?,
       ~inputReadOnly=?,
       ~minuteStep=?,
       ~open_=?,
       ~placeholder=?,
       ~popupClassName=?,
       ~secondStep=?,
       ~use12Hours=?,
       ~value=?,
       ~onChange=?,
       ~onOpenChange=?,
       ~id=?,
       ~style=?,
       children,
     ) =>
   ReasonReact.wrapJsForReason(
     ~reactClass,
     ~props=
       makeProps(
         ~addon?,
         ~allowEmpty?,
         ~autoFocus?,
         ~className?,
         ~clearText?,
         ~defaultOpenValue?,
         ~defaultValue?,
         ~disabled?,
         ~disabledHours?,
         ~disabledMinutes?,
         ~disabledSeconds?,
         ~format?,
         ~getPopupContainer?,
         ~hideDisabledOptions?,
         ~hourStep?,
         ~inputReadOnly?,
         ~minuteStep?,
         ~open_?,
         ~placeholder?,
         ~popupClassName?,
         ~secondStep?,
         ~use12Hours?,
         ~value?,
         ~onChange?,
         ~onOpenChange?,
         ~id?,
         ~style?,
         (),
       ),
     children,
   );

 /*
  addon	called from timepicker panel to render some addon to its bottom	function	-
  allowEmpty	allow clearing text	boolean	true
  autoFocus	get focus when component mounted	boolean	false
  className	className of picker	string	''
  clearText	clear tooltip of icon	string	clear
  defaultOpenValue	default open panel value, used to set utcOffset,locale if value/defaultValue absent	moment	moment()
  defaultValue	to set default time	moment	-
  disabled	determine whether the TimePicker is disabled	boolean	false
  disabledHours	to specify the hours that cannot be selected	function()	-
  disabledMinutes	to specify the minutes that cannot be selected	function(selectedHour)	-
  disabledSeconds	to specify the seconds that cannot be selected	function(selectedHour, selectedMinute)	-
  format	to set the time format	string	"HH:mm:ss"
  getPopupContainer	to set the container of the floating layer, while the default is to create a div element in body	function(trigger)	-
  hideDisabledOptions	hide the options that can not be selected	boolean	false
  hourStep	interval between hours in picker	number	1
  inputReadOnly	Set the readonly attribute of the input tag (avoids virtual keyboard on touch devices)	boolean	false
  minuteStep	interval between minutes in picker	number	1
  open	whether to popup panel	boolean	false
  placeholder	display when there's no value	string	"Select a time"
  popupClassName	className of panel	string	''
  secondStep	interval between seconds in picker	number	1
  use12Hours	display as 12 hours format, with default format h:mm:ss a	boolean	false
  value	to set time	moment	-
  onChange	a callback function, can be executed when the selected time is changing	function(time: moment, timeString: string): void	-
  onOpenChange	a callback function which will be called while panel opening/closing	(open: boolean): void	-
  */


 */
