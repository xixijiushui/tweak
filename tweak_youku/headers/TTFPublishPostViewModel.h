//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TTFPostContentModel, TTFPublishPostService;

@interface TTFPublishPostViewModel : NSObject
{
    TTFPostContentModel *_postContentModel;
    CDUnknownBlockType _complete;
    TTFPublishPostService *_publicPostService;
}

@property(retain, nonatomic) TTFPublishPostService *publicPostService; // @synthesize publicPostService=_publicPostService;
@property(copy, nonatomic) CDUnknownBlockType complete; // @synthesize complete=_complete;
@property(retain, nonatomic) TTFPostContentModel *postContentModel; // @synthesize postContentModel=_postContentModel;
- (void).cxx_destruct;
- (void)modifyPostWithModel:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)publishPostWithModel:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)init;

@end
