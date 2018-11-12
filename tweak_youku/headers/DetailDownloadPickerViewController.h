//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBaseViewController.h"

#import "DetailPickerViewDataSource.h"
#import "DetailPickerViewDelegate.h"

@class DetailPickerView, NSArray, NSString, UIImageView, UIView;

@interface DetailDownloadPickerViewController : UIBaseViewController <DetailPickerViewDataSource, DetailPickerViewDelegate>
{
    id <DetailDownloadPickerViewControllerDelegate> _delegate;
    UIView *_maskView;
    NSArray *_language;
    NSArray *_formats;
    UIImageView *_downloadADView;
    DetailPickerView *_downloadPickerView;
}

@property(retain, nonatomic) DetailPickerView *downloadPickerView; // @synthesize downloadPickerView=_downloadPickerView;
@property(retain, nonatomic) UIImageView *downloadADView; // @synthesize downloadADView=_downloadADView;
@property(copy, nonatomic) NSArray *formats; // @synthesize formats=_formats;
@property(copy, nonatomic) NSArray *language; // @synthesize language=_language;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) __weak id <DetailDownloadPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)maskViewClicked:(id)arg1;
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2;
- (void)hidePicker;
- (void)showPicker;
- (void)showPickerWithAD:(_Bool)arg1;
- (void)setupWithFormats:(id)arg1 Languages:(id)arg2;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

