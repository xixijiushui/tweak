//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel, UISwitch, UIView;

@interface TTFSignInCardDateCell : UITableViewCell
{
    _Bool _isDateSelected;
    long long _selectedTime;
    CDUnknownBlockType _selectDateBlock;
    CDUnknownBlockType _timeClickBlock;
    UIView *_titleContainer;
    UIView *_timeContaier;
    UILabel *_titleLabel;
    UISwitch *_switchView;
    UILabel *_timeTitle;
    UILabel *_timeLabel;
    UILabel *_accessoryIconLabel;
    UIView *_separatorLine;
    UIView *_bottomLine;
}

+ (id)dateStringFromTimeInterval:(long long)arg1 format:(id)arg2;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UILabel *accessoryIconLabel; // @synthesize accessoryIconLabel=_accessoryIconLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *timeTitle; // @synthesize timeTitle=_timeTitle;
@property(retain, nonatomic) UISwitch *switchView; // @synthesize switchView=_switchView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *timeContaier; // @synthesize timeContaier=_timeContaier;
@property(retain, nonatomic) UIView *titleContainer; // @synthesize titleContainer=_titleContainer;
@property(copy, nonatomic) CDUnknownBlockType timeClickBlock; // @synthesize timeClickBlock=_timeClickBlock;
@property(copy, nonatomic) CDUnknownBlockType selectDateBlock; // @synthesize selectDateBlock=_selectDateBlock;
@property(nonatomic) long long selectedTime; // @synthesize selectedTime=_selectedTime;
@property(nonatomic) _Bool isDateSelected; // @synthesize isDateSelected=_isDateSelected;
- (void).cxx_destruct;
- (void)onTimeTap;
- (void)onTitleTap;
- (id)dateStringFromTimeInterval:(double)arg1 format:(id)arg2;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initViews;

@end

