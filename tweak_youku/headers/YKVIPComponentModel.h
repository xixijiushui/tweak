//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableArray, NSString, UIImage, VIPCMSAction, YKVIPComponentTextItem;

@interface YKVIPComponentModel : NSObject
{
    _Bool _isHiddenHeader;
    _Bool _hasNext;
    _Bool _hasFooter;
    _Bool _displayCurve;
    long long _type;
    NSString *_className;
    NSDictionary *_sourceDict;
    NSMutableArray *_items;
    NSMutableArray *_totalItems;
    NSString *_componentId;
    NSString *_title;
    NSString *_desc;
    VIPCMSAction *_titleAction;
    NSMutableArray *_keyWords;
    long long _currentIndex;
    UIImage *_blurImage;
    long long _itemNum;
    YKVIPComponentTextItem *_changeText;
    YKVIPComponentTextItem *_enterText;
    NSString *_line;
    NSString *_source;
    NSString *_backgroundImg;
    NSDictionary *_typeExtend;
    NSDictionary *_extraExtend;
    NSDictionary *_templateDict;
}

+ (id)initModelWithDict:(id)arg1;
@property(retain, nonatomic) NSDictionary *templateDict; // @synthesize templateDict=_templateDict;
@property(retain, nonatomic) NSDictionary *extraExtend; // @synthesize extraExtend=_extraExtend;
@property(retain, nonatomic) NSDictionary *typeExtend; // @synthesize typeExtend=_typeExtend;
@property(retain, nonatomic) NSString *backgroundImg; // @synthesize backgroundImg=_backgroundImg;
@property(nonatomic) _Bool displayCurve; // @synthesize displayCurve=_displayCurve;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *line; // @synthesize line=_line;
@property(nonatomic) _Bool hasFooter; // @synthesize hasFooter=_hasFooter;
@property(retain, nonatomic) YKVIPComponentTextItem *enterText; // @synthesize enterText=_enterText;
@property(retain, nonatomic) YKVIPComponentTextItem *changeText; // @synthesize changeText=_changeText;
@property(nonatomic) long long itemNum; // @synthesize itemNum=_itemNum;
@property(retain, nonatomic) UIImage *blurImage; // @synthesize blurImage=_blurImage;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) _Bool hasNext; // @synthesize hasNext=_hasNext;
@property(retain, nonatomic) NSMutableArray *keyWords; // @synthesize keyWords=_keyWords;
@property(retain, nonatomic) VIPCMSAction *titleAction; // @synthesize titleAction=_titleAction;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool isHiddenHeader; // @synthesize isHiddenHeader=_isHiddenHeader;
@property(retain, nonatomic) NSString *componentId; // @synthesize componentId=_componentId;
@property(retain, nonatomic) NSMutableArray *totalItems; // @synthesize totalItems=_totalItems;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSDictionary *sourceDict; // @synthesize sourceDict=_sourceDict;
@property(retain, nonatomic) NSString *className; // @synthesize className=_className;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)splitArray:(id)arg1 withSize:(long long)arg2;
- (id)handlerKeyWords:(id)arg1;
- (id)handlerItems:(id)arg1;
- (id)initWithDict:(id)arg1;

@end

