//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFSaintseiyaTagItemDTO>, YKFSaintseiyaInteractionItemDTO, YKFSaintseiyaItemMusicItemDTO, YKFSaintseiyaUserItemDTO, YKFSaintseiyaVideoItemDTO;

@interface YKFSaintseiyaFollowItemDTO : YKFAPIModel
{
    YKFSaintseiyaInteractionItemDTO *_interaction;
    YKFSaintseiyaItemMusicItemDTO *_music;
    NSArray<YKFSaintseiyaTagItemDTO> *_tags;
    YKFSaintseiyaUserItemDTO *_user;
    YKFSaintseiyaVideoItemDTO *_video;
}

@property(retain, nonatomic) YKFSaintseiyaVideoItemDTO *video; // @synthesize video=_video;
@property(retain, nonatomic) YKFSaintseiyaUserItemDTO *user; // @synthesize user=_user;
@property(retain, nonatomic) NSArray<YKFSaintseiyaTagItemDTO> *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) YKFSaintseiyaItemMusicItemDTO *music; // @synthesize music=_music;
@property(retain, nonatomic) YKFSaintseiyaInteractionItemDTO *interaction; // @synthesize interaction=_interaction;
- (void).cxx_destruct;

@end

