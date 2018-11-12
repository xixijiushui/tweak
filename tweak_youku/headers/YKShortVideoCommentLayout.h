//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YKShortVideoCommentModel, YYTextLayout;

@interface YKShortVideoCommentLayout : NSObject
{
    double _leftMargin;
    double _rightMargin;
    double _topMargin;
    double _bottomMargin;
    double _avatarHeight;
    double _avatarNamePadding;
    double _nameTextHeight;
    double _nameContentPadding;
    double _commentContentHeight;
    double _textHeight;
    YYTextLayout *_textLayout;
    YYTextLayout *_nameTextLayout;
    YKShortVideoCommentModel *_model;
    id _objectCode;
    double _height;
}

@property(nonatomic) double height; // @synthesize height=_height;
@property(copy, nonatomic) id objectCode; // @synthesize objectCode=_objectCode;
@property(retain, nonatomic) YKShortVideoCommentModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) YYTextLayout *nameTextLayout; // @synthesize nameTextLayout=_nameTextLayout;
@property(readonly, nonatomic) YYTextLayout *textLayout; // @synthesize textLayout=_textLayout;
@property(readonly, nonatomic) double textHeight; // @synthesize textHeight=_textHeight;
@property(readonly, nonatomic) double commentContentHeight; // @synthesize commentContentHeight=_commentContentHeight;
@property(readonly, nonatomic) double nameContentPadding; // @synthesize nameContentPadding=_nameContentPadding;
@property(readonly, nonatomic) double nameTextHeight; // @synthesize nameTextHeight=_nameTextHeight;
@property(readonly, nonatomic) double avatarNamePadding; // @synthesize avatarNamePadding=_avatarNamePadding;
@property(readonly, nonatomic) double avatarHeight; // @synthesize avatarHeight=_avatarHeight;
@property(readonly, nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(readonly, nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(readonly, nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property(readonly, nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
- (void).cxx_destruct;
- (id)_attachmentWithFontSize:(double)arg1 image:(id)arg2 shrink:(_Bool)arg3;
- (id)_textWithModel:(id)arg1 fontSize:(double)arg2 textColor:(id)arg3;
- (void)_commentTextLayout;
- (void)_nameTextLayout;
- (void)layout;
- (id)initWithCommmentModel:(id)arg1;
- (id)init;

@end
