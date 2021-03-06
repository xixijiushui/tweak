//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString, YKFCommunityPhotoPublisherPO, YKFCommunityPhotoViewerPO;

@interface YKFCommunityPhotoPO : YKFAPIModel
{
    NSString *_albumId;
    long long _gmtCreate;
    NSString *_photoId;
    long long _praiseCount;
    YKFCommunityPhotoPublisherPO *_publisher;
    NSString *_title;
    NSString *_url;
    YKFCommunityPhotoViewerPO *_viewer;
}

@property(retain, nonatomic) YKFCommunityPhotoViewerPO *viewer; // @synthesize viewer=_viewer;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) YKFCommunityPhotoPublisherPO *publisher; // @synthesize publisher=_publisher;
@property(nonatomic) long long praiseCount; // @synthesize praiseCount=_praiseCount;
@property(retain, nonatomic) NSString *photoId; // @synthesize photoId=_photoId;
@property(nonatomic) long long gmtCreate; // @synthesize gmtCreate=_gmtCreate;
@property(retain, nonatomic) NSString *albumId; // @synthesize albumId=_albumId;
- (void).cxx_destruct;

@end

