//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, UIView;

@interface YKUInsertTableViewModel : NSObject
{
    _Bool _isToBottom;
    float _tableViwHeight;
    float _lineBreakHeight;
    float _viewInTableViewContentOffSet;
    NSString *_type;
    UIView *_tableViewInsert;
    long long _colums;
    NSMutableArray *_itemHeightDataArray;
    long long _currentPage;
    long long _modelDataPage;
}

@property(nonatomic) long long modelDataPage; // @synthesize modelDataPage=_modelDataPage;
@property(nonatomic) _Bool isToBottom; // @synthesize isToBottom=_isToBottom;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) float viewInTableViewContentOffSet; // @synthesize viewInTableViewContentOffSet=_viewInTableViewContentOffSet;
@property(nonatomic) float lineBreakHeight; // @synthesize lineBreakHeight=_lineBreakHeight;
@property(retain, nonatomic) NSMutableArray *itemHeightDataArray; // @synthesize itemHeightDataArray=_itemHeightDataArray;
@property(nonatomic) long long colums; // @synthesize colums=_colums;
@property(nonatomic) float tableViwHeight; // @synthesize tableViwHeight=_tableViwHeight;
@property(retain, nonatomic) UIView *tableViewInsert; // @synthesize tableViewInsert=_tableViewInsert;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)init;

@end

