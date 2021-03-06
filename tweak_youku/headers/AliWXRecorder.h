//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, UIViewController;

@interface AliWXRecorder : NSObject
{
    _Bool _isDebug;
    _Bool _wvcacheSwitch;
    _Bool _fscacheSwitch;
    _Bool _bundleIntegrityCheck;
    NSURL *_currentURL;
    UIViewController *_currentVC;
    unsigned long long _embedMemoryStrategy;
    unsigned long long _embedMaxNum;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned long long embedMaxNum; // @synthesize embedMaxNum=_embedMaxNum;
@property(nonatomic) unsigned long long embedMemoryStrategy; // @synthesize embedMemoryStrategy=_embedMemoryStrategy;
@property(nonatomic) _Bool bundleIntegrityCheck; // @synthesize bundleIntegrityCheck=_bundleIntegrityCheck;
@property(nonatomic) _Bool fscacheSwitch; // @synthesize fscacheSwitch=_fscacheSwitch;
@property(nonatomic) _Bool wvcacheSwitch; // @synthesize wvcacheSwitch=_wvcacheSwitch;
@property(nonatomic) _Bool isDebug; // @synthesize isDebug=_isDebug;
@property(nonatomic) __weak UIViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(retain, nonatomic) NSURL *currentURL; // @synthesize currentURL=_currentURL;
- (void).cxx_destruct;
- (id)init;

@end

