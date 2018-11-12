//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBLMPopRequest.h"

@class TBPLBaseConfigModel, TBPLBaseLayer, TBPopLayerEvent;

@interface TBLMHuDongPopRequest : TBLMPopRequest
{
    TBPLBaseLayer *_baseLayer;
    TBPopLayerEvent *_event;
    TBPLBaseConfigModel *_config;
}

@property(retain, nonatomic) TBPLBaseConfigModel *config; // @synthesize config=_config;
@property(retain, nonatomic) TBPopLayerEvent *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (id)layer;
- (void)setLayer:(id)arg1;
- (id)initHuDongPopRequestWithHostView:(id)arg1 event:(id)arg2 config:(id)arg3;
- (id)initHuDongPopRequestWithEvent:(id)arg1 config:(id)arg2;

@end

