//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDictionary, NSMutableArray;

@interface DYKURLRouterData : NSObject <NSCoding>
{
    NSMutableArray *_bundleList;
    NSDictionary *_mappingTable;
    NSDictionary *_regexMappingTable;
    NSDictionary *_serviceMappingTable;
    NSMutableArray *_headMiddleWares;
    NSMutableArray *_tailMiddleWares;
}

@property(retain, nonatomic) NSMutableArray *tailMiddleWares; // @synthesize tailMiddleWares=_tailMiddleWares;
@property(retain, nonatomic) NSMutableArray *headMiddleWares; // @synthesize headMiddleWares=_headMiddleWares;
@property(retain, nonatomic) NSDictionary *serviceMappingTable; // @synthesize serviceMappingTable=_serviceMappingTable;
@property(retain, nonatomic) NSDictionary *regexMappingTable; // @synthesize regexMappingTable=_regexMappingTable;
@property(retain, nonatomic) NSDictionary *mappingTable; // @synthesize mappingTable=_mappingTable;
@property(retain, nonatomic) NSMutableArray *bundleList; // @synthesize bundleList=_bundleList;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

