//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LSAirplayDataManager : NSObject
{
}

+ (id)shardeInstance;
- (void)selectDevice:(id)arg1 ykPlayer:(id)arg2;
- (id)generateQualityItemList:(id)arg1 selectedModel:(id)arg2;
- (id)generateWedomeItemList:(id)arg1;
- (id)generateWirelessItemList:(id)arg1;
- (id)generateActionSheetTitle:(_Bool)arg1;
- (_Bool)isContainDlnaDevice:(id)arg1;
- (void)checkForWirelessPlay_YT:(id)arg1;
- (void)checkForWirelessPlay:(id)arg1;
- (_Bool)checkAutoAirplayToLastDevice:(id)arg1;
- (_Bool)isNeedShowAirplayQuitAlertView;
- (_Bool)isNeedShowAirplayButton;
- (_Bool)checkOrangeBoolValue:(id)arg1 defaultValue:(_Bool)arg2;
- (void)saveLastAirplayDevice:(id)arg1;
- (id)fetchLastAirplayDevice;

@end

