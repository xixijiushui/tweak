//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASControlNode.h"

@class ASImageNode, ASTextNode, NSAttributedString, UIImage;

@interface ASButtonNode : ASControlNode
{
    NSAttributedString *_normalAttributedTitle;
    NSAttributedString *_highlightedAttributedTitle;
    NSAttributedString *_selectedAttributedTitle;
    NSAttributedString *_selectedHighlightedAttributedTitle;
    NSAttributedString *_disabledAttributedTitle;
    UIImage *_normalImage;
    UIImage *_highlightedImage;
    UIImage *_selectedImage;
    UIImage *_selectedHighlightedImage;
    UIImage *_disabledImage;
    UIImage *_normalBackgroundImage;
    UIImage *_highlightedBackgroundImage;
    UIImage *_selectedBackgroundImage;
    UIImage *_selectedHighlightedBackgroundImage;
    UIImage *_disabledBackgroundImage;
    _Bool _laysOutHorizontally;
    double _contentSpacing;
    unsigned long long _contentVerticalAlignment;
    unsigned long long _contentHorizontalAlignment;
    long long _imageAlignment;
    ASTextNode *_titleNode;
    ASImageNode *_imageNode;
    ASImageNode *_backgroundImageNode;
    struct UIEdgeInsets _contentEdgeInsets;
}

- (void).cxx_destruct;
- (void)layout;
- (id)layoutSpecThatFits:(CDStruct_42a63532)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)backgroundImageForState:(unsigned long long)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)imageForState:(unsigned long long)arg1;
- (void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2;
- (id)attributedTitleForState:(unsigned long long)arg1;
- (void)setTitle:(id)arg1 withFont:(id)arg2 withColor:(id)arg3 forState:(unsigned long long)arg4;
@property(nonatomic) long long imageAlignment; // @synthesize imageAlignment=_imageAlignment;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(nonatomic) unsigned long long contentHorizontalAlignment; // @synthesize contentHorizontalAlignment=_contentHorizontalAlignment;
@property(nonatomic) unsigned long long contentVerticalAlignment; // @synthesize contentVerticalAlignment=_contentVerticalAlignment;
@property(nonatomic) _Bool laysOutHorizontally; // @synthesize laysOutHorizontally=_laysOutHorizontally;
@property(nonatomic) double contentSpacing; // @synthesize contentSpacing=_contentSpacing;
- (void)updateBackgroundImage;
- (void)updateTitle;
- (void)updateImage;
- (void)setDisplaysAsynchronously:(_Bool)arg1;
- (void)updateButtonContent;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setLayerBacked:(_Bool)arg1;
@property(readonly, nonatomic) ASImageNode *backgroundImageNode; // @synthesize backgroundImageNode=_backgroundImageNode;
@property(readonly, nonatomic) ASImageNode *imageNode; // @synthesize imageNode=_imageNode;
@property(readonly, nonatomic) ASTextNode *titleNode; // @synthesize titleNode=_titleNode;
- (id)init;

@end

