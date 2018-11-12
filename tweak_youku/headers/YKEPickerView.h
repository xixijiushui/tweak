//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YKEPickerDrumDataSource.h"
#import "YKEPickerDrumDelegate.h"

@class NSMutableArray, NSString, UIColor;

@interface YKEPickerView : UIView <YKEPickerDrumDelegate, YKEPickerDrumDataSource>
{
    NSMutableArray *_drums;
    _Bool _didLoad;
    id <YKEPickerViewDataSource> _dataSource;
    id <YKEPickerViewDelegate> _delegate;
    UIColor *_foregroundColor;
}

@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(nonatomic) __weak id <YKEPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <YKEPickerViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)pickerDrum:(id)arg1 didSelectRow:(long long)arg2;
- (id)pickerDrum:(id)arg1 titleForRow:(long long)arg2;
- (id)pickerDrum:(id)arg1 viewForRow:(long long)arg2 reusingView:(id)arg3;
- (double)rowHeightInPickerDrum:(id)arg1;
- (long long)numberOfRowsInPickerDrum:(id)arg1;
- (void)layoutSubviews;
- (double)widthForComponent:(long long)arg1;
- (long long)selectedRowInComponent:(long long)arg1;
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 animated:(_Bool)arg3;
- (void)reloadComponent:(long long)arg1;
- (void)customInit;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

