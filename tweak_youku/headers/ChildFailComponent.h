//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChildWxComponent.h"

#import "ChildErrorViewDelegate.h"

@class ChildEmptyView;

@interface ChildFailComponent : ChildWxComponent <ChildErrorViewDelegate>
{
    ChildEmptyView *_emptyFailedView;
    long long _errorType;
}

@property(nonatomic) long long errorType; // @synthesize errorType=_errorType;
@property(retain, nonatomic) ChildEmptyView *emptyFailedView; // @synthesize emptyFailedView=_emptyFailedView;
- (void).cxx_destruct;
- (id)unicodeDecodeString:(id)arg1;
- (void)onRetryClick;
- (void)viewDidLoad;
- (void)updateAttributes:(id)arg1;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

@end

