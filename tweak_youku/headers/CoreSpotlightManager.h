//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CoreSpotlightDelegate.h"

@class NSString;

@interface CoreSpotlightManager : NSObject <CoreSpotlightDelegate>
{
}

+ (id)sharedInstance;
- (id)descWithCate:(id)arg1 performer:(id)arg2 status:(id)arg3;
- (id)identifierWithVid:(id)arg1 title:(id)arg2 sid:(id)arg3;
- (id)UTF8StringToSting:(id)arg1;
- (id)stringToUTF8String:(id)arg1;
- (id)transInformationToTitle:(id)arg1;
- (id)transInformationToSid:(id)arg1;
- (id)transInformationToVid:(id)arg1;
- (id)plistPath;
- (_Bool)removePlistWithPath:(id)arg1;
- (id)readPlistWithPath:(id)arg1;
- (void)writeItemsToPlist:(id)arg1;
- (void)homeSliderVideosDidUpdateNotification:(id)arg1;
- (void)addSearchToSpotlight:(id)arg1;
- (void)addSearchWithParams:(id)arg1;
- (void)deleteSearchWithIdentifiers:(id)arg1;
- (void)addCSSearchWithArray:(id)arg1;
- (void)transModelToSearchItem:(id)arg1 withDomainIdentifier:(id)arg2;
- (void)addSearch;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

