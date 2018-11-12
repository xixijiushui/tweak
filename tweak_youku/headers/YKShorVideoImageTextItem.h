//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSString;

@interface YKShorVideoImageTextItem : NSObject <NSCoding>
{
    _Bool _isChangeColr;
    _Bool _isHideLineView;
    _Bool _isExposure;
    NSString *_scm;
    NSString *_spm;
    NSString *_cid;
    NSString *_title;
    NSString *_templatecell;
    NSString *_commentCount;
    NSString *_commentStatus;
    NSString *_wmName;
    NSString *_trackInfo;
    NSArray *_thumbs;
    double _rowHeight;
    struct CGRect _titleTextRect;
    struct CGRect _titleFrame;
    struct CGRect _userNameFrame;
    struct CGRect _commentIconFrame;
    struct CGRect _commentLableFrame;
    struct CGRect _bigImageFrame;
    struct CGRect _image1Frame;
    struct CGRect _image2Frame;
    struct CGRect _image3Frame;
    struct CGRect _linViewFrame;
}

@property(nonatomic) struct CGRect linViewFrame; // @synthesize linViewFrame=_linViewFrame;
@property(nonatomic) struct CGRect image3Frame; // @synthesize image3Frame=_image3Frame;
@property(nonatomic) struct CGRect image2Frame; // @synthesize image2Frame=_image2Frame;
@property(nonatomic) struct CGRect image1Frame; // @synthesize image1Frame=_image1Frame;
@property(nonatomic) struct CGRect bigImageFrame; // @synthesize bigImageFrame=_bigImageFrame;
@property(nonatomic) struct CGRect commentLableFrame; // @synthesize commentLableFrame=_commentLableFrame;
@property(nonatomic) struct CGRect commentIconFrame; // @synthesize commentIconFrame=_commentIconFrame;
@property(nonatomic) struct CGRect userNameFrame; // @synthesize userNameFrame=_userNameFrame;
@property(nonatomic) struct CGRect titleFrame; // @synthesize titleFrame=_titleFrame;
@property(nonatomic) struct CGRect titleTextRect; // @synthesize titleTextRect=_titleTextRect;
@property(nonatomic) _Bool isExposure; // @synthesize isExposure=_isExposure;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(nonatomic) _Bool isHideLineView; // @synthesize isHideLineView=_isHideLineView;
@property(nonatomic) _Bool isChangeColr; // @synthesize isChangeColr=_isChangeColr;
@property(retain, nonatomic) NSArray *thumbs; // @synthesize thumbs=_thumbs;
@property(retain, nonatomic) NSString *trackInfo; // @synthesize trackInfo=_trackInfo;
@property(retain, nonatomic) NSString *wmName; // @synthesize wmName=_wmName;
@property(retain, nonatomic) NSString *commentStatus; // @synthesize commentStatus=_commentStatus;
@property(retain, nonatomic) NSString *commentCount; // @synthesize commentCount=_commentCount;
@property(retain, nonatomic) NSString *templatecell; // @synthesize templatecell=_templatecell;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(retain, nonatomic) NSString *spm; // @synthesize spm=_spm;
@property(retain, nonatomic) NSString *scm; // @synthesize scm=_scm;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

