//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIDatePicker;

@interface YKFDateTimePickerView : UIView
{
    UIDatePicker *_datePicker;
}

+ (id)showDateTimePickerWithMode:(long long)arg1 title:(id)arg2 defaultDateTime:(double)arg3 startTime:(double)arg4 endTime:(double)arg5 callbackBlock:(CDUnknownBlockType)arg6;
+ (id)showDateTimePickerWithMode:(long long)arg1 title:(id)arg2 defaultDateTime:(double)arg3 callbackBlock:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

