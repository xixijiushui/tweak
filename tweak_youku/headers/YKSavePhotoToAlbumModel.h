//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface YKSavePhotoToAlbumModel : NSObject
{
    double _startTime;
    double _endTime;
    NSURL *_savedAssetURL;
}

@property(retain, nonatomic) NSURL *savedAssetURL; // @synthesize savedAssetURL=_savedAssetURL;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;

@end
