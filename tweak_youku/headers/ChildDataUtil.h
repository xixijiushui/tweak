//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ChildDataUtil : NSObject
{
}

+ (id)getDownloadItem:(id)arg1 vid:(id)arg2;
+ (id)getDownloadItem:(id)arg1 pos:(long long)arg2;
+ (id)getVideoInfo:(id)arg1 vid:(id)arg2;
+ (long long)getVideoPosByVid:(id)arg1 videoid:(id)arg2;
+ (_Bool)isVideoItemVidValid:(id)arg1;
+ (id)getNextVideoByVid:(id)arg1 videoid:(id)arg2;
+ (id)getVideoInfo:(id)arg1 pos:(long long)arg2;
+ (id)getVideoList:(id)arg1;
+ (_Bool)isDataValid:(id)arg1;

@end

