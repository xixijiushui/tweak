//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ICAttachment, ICDrawingLightView;

@interface ICDrawingAttachmentInfo : NSObject
{
    _Bool _isNew;
    ICAttachment *_attachment;
    ICDrawingLightView *_lightView;
    struct _NSRange _insertRange;
}

@property(nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(nonatomic) struct _NSRange insertRange; // @synthesize insertRange=_insertRange;
@property(retain, nonatomic) ICDrawingLightView *lightView; // @synthesize lightView=_lightView;
@property(retain, nonatomic) ICAttachment *attachment; // @synthesize attachment=_attachment;
- (void).cxx_destruct;

@end

