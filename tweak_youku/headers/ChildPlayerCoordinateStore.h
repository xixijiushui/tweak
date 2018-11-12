//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ChildPlayerCoordinateStore : NSObject
{
    double _playerWidth;
    double _playerHeight;
    struct CGRect _fullScreenRect;
    struct CGRect _smallScreenRect;
}

+ (id)sharedInstance;
@property(nonatomic) double playerHeight; // @synthesize playerHeight=_playerHeight;
@property(nonatomic) double playerWidth; // @synthesize playerWidth=_playerWidth;
@property(nonatomic) struct CGRect smallScreenRect; // @synthesize smallScreenRect=_smallScreenRect;
@property(nonatomic) struct CGRect fullScreenRect; // @synthesize fullScreenRect=_fullScreenRect;
- (double)heightRatio;
- (double)widthRatio;
- (id)initPrivate;
- (id)init;

@end

