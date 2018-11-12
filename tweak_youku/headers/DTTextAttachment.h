//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDictionary, NSString, NSURL;

@interface DTTextAttachment : NSObject <NSCoding>
{
    struct CGSize _displaySize;
    struct CGSize _originalSize;
    struct CGSize _maxImageSize;
    NSURL *_contentURL;
    NSDictionary *_attributes;
    unsigned long long _verticalAlignment;
    NSURL *_hyperLinkURL;
    NSString *_hyperLinkGUID;
    double _fontLeading;
    double _fontAscent;
    double _fontDescent;
    NSString *hyperLinkGUID;
}

+ (Class)registeredClassForTagName:(id)arg1;
+ (void)registerClass:(Class)arg1 forTagName:(id)arg2;
+ (id)textAttachmentWithElement:(id)arg1 options:(id)arg2;
+ (void)initialize;
@property(retain, nonatomic) NSString *hyperLinkGUID; // @synthesize hyperLinkGUID;
@property(nonatomic) unsigned long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSURL *hyperLinkURL; // @synthesize hyperLinkURL=_hyperLinkURL;
@property(retain, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(nonatomic) struct CGSize displaySize; // @synthesize displaySize=_displaySize;
@property(nonatomic) struct CGSize originalSize; // @synthesize originalSize=_originalSize;
- (void).cxx_destruct;
- (void)setDisplaySize:(struct CGSize)arg1 withMaxDisplaySize:(struct CGSize)arg2;
- (double)descentForLayout;
- (double)ascentForLayout;
- (void)adjustVerticalAlignmentForFont:(struct __CTFont *)arg1;
- (id)initWithElement:(id)arg1 options:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

