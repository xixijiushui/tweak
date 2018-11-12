//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CAShapeLayer, NSLayoutConstraint, NSString, UIColor, UITableView, UIView;

@interface MKDropdownMenuContentViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate>
{
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_leftConstraint;
    NSLayoutConstraint *_rightConstraint;
    id <MKDropdownMenuContentViewControllerDelegate> _delegate;
    UIView *_containerView;
    UIView *_shadowView;
    UIView *_borderView;
    CAShapeLayer *_borderLayer;
    UIView *_tableContainerView;
    UITableView *_tableView;
    UIView *_separatorContainerView;
    UIColor *_highlightColor;
    long long _textAlignment;
    double _cornerRadius;
    unsigned long long _roundedCorners;
    long long _rowsCount;
    long long _maxRows;
    struct UIOffset _separatorViewOffset;
}

@property(nonatomic) long long maxRows; // @synthesize maxRows=_maxRows;
@property(nonatomic) long long rowsCount; // @synthesize rowsCount=_rowsCount;
@property(nonatomic) unsigned long long roundedCorners; // @synthesize roundedCorners=_roundedCorners;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(nonatomic) struct UIOffset separatorViewOffset; // @synthesize separatorViewOffset=_separatorViewOffset;
@property(retain, nonatomic) UIView *separatorContainerView; // @synthesize separatorContainerView=_separatorContainerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *tableContainerView; // @synthesize tableContainerView=_tableContainerView;
@property(retain, nonatomic) CAShapeLayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <MKDropdownMenuContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)handleTap:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
@property(nonatomic) _Bool showsBorder;
@property(nonatomic) _Bool showsTopRowSeparator;
- (void)updateSeparatorViewOffset;
- (void)insertSeparatorView:(id)arg1;
@property(nonatomic) struct UIEdgeInsets contentInset;
@property(readonly, nonatomic) double contentHeight;
@property(readonly, nonatomic) double maxHeight;
- (void)updateContainerHeight;
- (void)updateDataAtIndexes:(id)arg1;
- (void)updateData;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateMask;
- (void)updateShadow;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
