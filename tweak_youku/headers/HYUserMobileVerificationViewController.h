//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HYUserBaseViewController.h"

#import "HYCountryListDelegate.h"
#import "HYUserSDKInputCellDelegate.h"

@class HYCountryCodeTableViewCell, HYUserSDKCountryEntity, HYUserSDKMobileInputTableViewCell, NSString;

@interface HYUserMobileVerificationViewController : HYUserBaseViewController <HYCountryListDelegate, HYUserSDKInputCellDelegate>
{
    NSString *_mobileNumber;
    HYUserSDKCountryEntity *_region;
    HYCountryCodeTableViewCell *_countryCodeCell;
    HYUserSDKMobileInputTableViewCell *_mobileCell;
}

@property(nonatomic) __weak HYUserSDKMobileInputTableViewCell *mobileCell; // @synthesize mobileCell=_mobileCell;
@property(nonatomic) __weak HYCountryCodeTableViewCell *countryCodeCell; // @synthesize countryCodeCell=_countryCodeCell;
@property(retain, nonatomic) HYUserSDKCountryEntity *region; // @synthesize region=_region;
@property(copy, nonatomic) NSString *mobileNumber; // @synthesize mobileNumber=_mobileNumber;
- (void).cxx_destruct;
- (void)inputCellDidEndEditing:(id)arg1;
- (void)countryEntityIsSelected:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)showCountryList;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

