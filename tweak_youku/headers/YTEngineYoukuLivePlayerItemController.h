//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YTEngineYoukuLivePlayerItemController : NSObject
{
    long long _countdown;
    long long _autoplay;
    long long _reconnects;
    long long _dragback;
    long long _fullscreen;
    long long _debug;
    long long _showlogo;
    long long _showprogress;
    long long _backlimit;
    long long _showfrontad;
    long long _area_code;
    long long _dma_code;
    long long _with_barrage;
    long long _barrage_id;
}

@property(nonatomic) long long barrage_id; // @synthesize barrage_id=_barrage_id;
@property(nonatomic) long long with_barrage; // @synthesize with_barrage=_with_barrage;
@property(nonatomic) long long dma_code; // @synthesize dma_code=_dma_code;
@property(nonatomic) long long area_code; // @synthesize area_code=_area_code;
@property(nonatomic) long long showfrontad; // @synthesize showfrontad=_showfrontad;
@property(nonatomic) long long backlimit; // @synthesize backlimit=_backlimit;
@property(nonatomic) long long showprogress; // @synthesize showprogress=_showprogress;
@property(nonatomic) long long showlogo; // @synthesize showlogo=_showlogo;
@property(nonatomic) long long debug; // @synthesize debug=_debug;
@property(nonatomic) long long fullscreen; // @synthesize fullscreen=_fullscreen;
@property(nonatomic) long long dragback; // @synthesize dragback=_dragback;
@property(nonatomic) long long reconnects; // @synthesize reconnects=_reconnects;
@property(nonatomic) long long autoplay; // @synthesize autoplay=_autoplay;
@property(nonatomic) long long countdown; // @synthesize countdown=_countdown;
- (void)dealloc;
- (id)initWithJson:(id)arg1;

@end

