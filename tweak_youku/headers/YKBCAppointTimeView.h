//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface YKBCAppointTimeView : UIView
{
    UILabel *_firstlabel;
    UILabel *_dayDetailLabel;
    UILabel *_dayLabel;
    UILabel *_hourDetailLabel;
    UILabel *_hourLabel;
    UILabel *_minuteDetailLabel;
    UILabel *_minuteLabel;
}

@property(retain, nonatomic) UILabel *minuteLabel; // @synthesize minuteLabel=_minuteLabel;
@property(retain, nonatomic) UILabel *minuteDetailLabel; // @synthesize minuteDetailLabel=_minuteDetailLabel;
@property(retain, nonatomic) UILabel *hourLabel; // @synthesize hourLabel=_hourLabel;
@property(retain, nonatomic) UILabel *hourDetailLabel; // @synthesize hourDetailLabel=_hourDetailLabel;
@property(retain, nonatomic) UILabel *dayLabel; // @synthesize dayLabel=_dayLabel;
@property(retain, nonatomic) UILabel *dayDetailLabel; // @synthesize dayDetailLabel=_dayDetailLabel;
@property(retain, nonatomic) UILabel *firstlabel; // @synthesize firstlabel=_firstlabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

