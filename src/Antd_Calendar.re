module Locale = Antd_DatePicker.Locale;

[@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/calendar";

[%bs.raw {|require("antd/lib/calendar/style")|}];

[@bs.deriving jsConverter]
type mode = [ | `month | `year];

type moment = MomentRe.Moment.t;

[@bs.obj]
external makeProps:
  (
    ~dateCellRender: (string, moment) => ReasonReact.reactElement=?,
    ~dateFullCellRender: (string, moment) => ReasonReact.reactElement=?,
    ~defaultValue: moment=?,
    ~disabledDate: moment => bool=?,
    ~fullscreen: bool=?,
    ~locale: 'c=?,
    ~mode: string=?,
    ~monthCellRender: moment => ReasonReact.reactElement=?,
    ~monthFullCellRender: moment => ReasonReact.reactElement=?,
    ~validRange: array(moment)=?,
    ~value: moment=?,
    ~onPanelChange: (moment, string) => unit=?,
    ~onSelect: moment => unit=?,
    ~onChange: moment => unit=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~dateCellRender=?,
      ~dateFullCellRender=?,
      ~defaultValue=?,
      ~disabledDate=?,
      ~fullscreen=?,
      ~locale=?,
      ~mode=?,
      ~monthCellRender=?,
      ~monthFullCellRender=?,
      ~validRange=?,
      ~value=?,
      ~onPanelChange=?,
      ~onSelect=?,
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
        ~dateCellRender?,
        ~dateFullCellRender?,
        ~defaultValue?,
        ~disabledDate?,
        ~fullscreen?,
        ~locale?,
        ~mode=?Js.Option.map((. b) => modeToJs(b), mode),
        ~monthCellRender?,
        ~monthFullCellRender?,
        ~validRange=?Js.Option.map((. b) => Array.of_list(b), validRange),
        ~value?,
        ~onPanelChange?,
        ~onSelect?,
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
        "onSelect": option('onSelect),
        "onPanelChange": option('onPanelChange),
        "value": option('value),
        "validRange": option('validRange),
        "monthFullCellRender": option('monthFullCellRender),
        "monthCellRender": option('monthCellRender),
        "mode": option('mode),
        "locale": option('locale),
        "fullscreen": option('fullscreen),
        "disabledDate": option('disabledDate),
        "defaultValue": option('defaultValue),
        "dateFullCellRender": option('dateFullCellRender),
        "dateCellRender": option('dateCellRender),
        "children": 'children,
      },
    ) =>
    make(
      ~style=?reactProps##style,
      ~className=?reactProps##className,
      ~id=?reactProps##id,
      ~onChange=?reactProps##onChange,
      ~onSelect=?reactProps##onSelect,
      ~onPanelChange=?reactProps##onPanelChange,
      ~value=?reactProps##value,
      ~validRange=?reactProps##validRange,
      ~monthFullCellRender=?reactProps##monthFullCellRender,
      ~monthCellRender=?reactProps##monthCellRender,
      ~mode=?reactProps##mode,
      ~locale=?reactProps##locale,
      ~fullscreen=?reactProps##fullscreen,
      ~disabledDate=?reactProps##disabledDate,
      ~defaultValue=?reactProps##defaultValue,
      ~dateFullCellRender=?reactProps##dateFullCellRender,
      ~dateCellRender=?reactProps##dateCellRender,
      reactProps##children,
    )
  );
[@bs.obj]
external makeProps:
  (
    ~children: 'children,
    ~dateCellRender: 'dateCellRender=?,
    ~dateFullCellRender: 'dateFullCellRender=?,
    ~defaultValue: 'defaultValue=?,
    ~disabledDate: 'disabledDate=?,
    ~fullscreen: 'fullscreen=?,
    ~locale: 'locale=?,
    ~mode: 'mode=?,
    ~monthCellRender: 'monthCellRender=?,
    ~monthFullCellRender: 'monthFullCellRender=?,
    ~validRange: 'validRange=?,
    ~value: 'value=?,
    ~onPanelChange: 'onPanelChange=?,
    ~onSelect: 'onSelect=?,
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
    "onSelect": option('onSelect),
    "onPanelChange": option('onPanelChange),
    "value": option('value),
    "validRange": option('validRange),
    "monthFullCellRender": option('monthFullCellRender),
    "monthCellRender": option('monthCellRender),
    "mode": option('mode),
    "locale": option('locale),
    "fullscreen": option('fullscreen),
    "disabledDate": option('disabledDate),
    "defaultValue": option('defaultValue),
    "dateFullCellRender": option('dateFullCellRender),
    "dateCellRender": option('dateCellRender),
    "children": 'children,
  } =
  "";

/*
 dateCellRender	Customize the display of the date cell, the returned content will be appended to the cell	function(date: moment): ReactNode	-
 dateFullCellRender	Customize the display of the date cell, the returned content will override the cell	function(date: moment): ReactNode	-
 defaultValue	The date selected by default	moment	default date
 disabledDate	Function that specifies the dates that cannot be selected	(currentDate: moment) => boolean	-
 fullscreen	Whether to display in full-screen	boolean	true
 locale	The calendar's locale	object	default
 mode	The display mode of the calendar	month | year	month
 monthCellRender	Customize the display of the month cell, the returned content will be appended to the cell	function(date: moment): ReactNode	-
 monthFullCellRender	Customize the display of the month cell, the returned content will override the cell	function(date: moment): ReactNode	-
 validRange	to set valid range	[moment, moment]	-
 value	The current selected date	moment	current date
 onPanelChange	Callback for when panel changes	function(date: moment, mode: string)	-
 onSelect	Callback for when a date is selected	function(date: moment?	-
 onChange	Callback for when date changes	function(date: moment?	-
   */
