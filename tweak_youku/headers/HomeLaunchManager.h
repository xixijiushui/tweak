//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HomePageItem, NSError;

@interface HomeLaunchManager : NSObject
{
    _Bool _isLaunchRequesting;
    id _launchJson;
    NSError *_launchError;
    HomePageItem *_launchPageItem;
}

+ (id)sharedInstance;
@property(retain, nonatomic) HomePageItem *launchPageItem; // @synthesize launchPageItem=_launchPageItem;
@property(retain, nonatomic) NSError *launchError; // @synthesize launchError=_launchError;
@property(retain, nonatomic) id launchJson; // @synthesize launchJson=_launchJson;
@property(nonatomic) _Bool isLaunchRequesting; // @synthesize isLaunchRequesting=_isLaunchRequesting;
- (void).cxx_destruct;
- (void)startLaunchRequest;

@end

