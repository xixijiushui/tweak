//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALMBaseViewModel.h"

@class NSArray, YKFCommunityStagePhotoServiceGetArtistShowsAPI, YKFStarPhotoAlbumShows;

@interface YKFStarPhotoAlbumShowsViewModel : ALMBaseViewModel
{
    long long _starId;
    NSArray *_shows;
    YKFStarPhotoAlbumShows *_currentShow;
    YKFCommunityStagePhotoServiceGetArtistShowsAPI *_showsApi;
    YKFStarPhotoAlbumShows *_showForAll;
}

@property(retain, nonatomic) YKFStarPhotoAlbumShows *showForAll; // @synthesize showForAll=_showForAll;
@property(retain, nonatomic) YKFCommunityStagePhotoServiceGetArtistShowsAPI *showsApi; // @synthesize showsApi=_showsApi;
@property(retain, nonatomic) YKFStarPhotoAlbumShows *currentShow; // @synthesize currentShow=_currentShow;
@property(retain, nonatomic) NSArray *shows; // @synthesize shows=_shows;
@property(nonatomic) long long starId; // @synthesize starId=_starId;
- (void).cxx_destruct;
- (void)loadShowsComplete:(CDUnknownBlockType)arg1;
- (id)init;

@end

