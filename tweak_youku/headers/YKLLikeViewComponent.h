//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXComponent.h"

@interface YKLLikeViewComponent : WXComponent
{
    id <AILPLikeViewProtocol> _likeViewProtocol;
}

@property(retain, nonatomic) id <AILPLikeViewProtocol> likeViewProtocol; // @synthesize likeViewProtocol=_likeViewProtocol;
- (void).cxx_destruct;
- (id)loadView;
- (void)updateAttributes:(id)arg1;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;
- (id)getAdapterWithTag:(id)arg1;
- (id)getAdapter;

@end
