//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YTCoreBaseFunction : NSObject
{
    id <AliCoreBaseFunctionFeature> mAliCoreBaseFunctionObj;
    id <YTCoreBaseFunctionNotifyDelegate> _delegate;
}

@property(nonatomic) __weak id <YTCoreBaseFunctionNotifyDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)aliCoreBaseFunctionMediaSplitEnd:(id)arg1;
- (void)aliCoreBaseFunction:(id)arg1 mediaSplitError:(long long)arg2;
- (void)aliCoreBaseFunction:(id)arg1 mediaSplitProgress:(long long)arg2;
- (long long)mediaSplitEnd;
- (long long)mediaSplitBeginInPath:(id)arg1 outPath:(id)arg2 type:(long long)arg3;
- (id)init;

@end

