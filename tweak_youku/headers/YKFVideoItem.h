//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface YKFVideoItem : NSObject
{
    _Bool _forceFullScreen;
    _Bool _isLocal;
    NSString *_vid;
    NSString *_coverImageURL;
    long long _type;
    long long _width;
    long long _height;
}

@property(nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(nonatomic) _Bool forceFullScreen; // @synthesize forceFullScreen=_forceFullScreen;
@property(nonatomic) long long height; // @synthesize height=_height;
@property(nonatomic) long long width; // @synthesize width=_width;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *coverImageURL; // @synthesize coverImageURL=_coverImageURL;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
- (void).cxx_destruct;

@end
