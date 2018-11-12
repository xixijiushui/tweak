//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFSaintseiyaButtonDTO>, NSArray<YKFSaintseiyaTagItemDTO>, NSDictionary, YKFSaintseiyaActionDTO, YKFSaintseiyaActivityDTO, YKFSaintseiyaCornerSignDTO, YKFSaintseiyaInteractionItemDTO, YKFSaintseiyaItemMusicItemDTO, YKFSaintseiyaUserItemDTO, YKFSaintseiyaVideoItemDTO;

@interface YKFSaintseiyaHomePageDataDTO : YKFAPIModel
{
    YKFSaintseiyaActionDTO *_action;
    YKFSaintseiyaActivityDTO *_activity;
    NSArray<YKFSaintseiyaButtonDTO> *_button;
    YKFSaintseiyaCornerSignDTO *_cornerSign;
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
@property(retain, nonatomic) YKFSaintseiyaCornerSignDTO *cornerSign; // @synthesize cornerSign=_cornerSign;
@property(retain, nonatomic) NSArray<YKFSaintseiyaButtonDTO> *button; // @synthesize button=_button;
@property(retain, nonatomic) YKFSaintseiyaActivityDTO *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) YKFSaintseiyaActionDTO *action; // @synthesize action=_action;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *extraInfoDic;
@property(nonatomic) _Bool isFakeModel;

@end
