//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YKDebugAssistiveButton;

@interface YKDebugManager : NSObject
{
    _Bool _enableDebug;
    YKDebugAssistiveButton *_debugAssistiveButton;
}

+ (id)sharedManager;
@property(retain, nonatomic) YKDebugAssistiveButton *debugAssistiveButton; // @synthesize debugAssistiveButton=_debugAssistiveButton;
@property(nonatomic) _Bool enableDebug; // @synthesize enableDebug=_enableDebug;
- (void).cxx_destruct;
- (void)toggleTopViewControllerOfClass:(Class)arg1;
- (id)topViewController;
- (void)click;
- (void)showDebug;
- (_Bool)isEnabled;
- (void)setEnabled:(_Bool)arg1;

@end

