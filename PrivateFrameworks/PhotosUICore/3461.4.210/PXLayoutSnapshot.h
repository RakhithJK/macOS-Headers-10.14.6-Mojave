//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PXLayoutEngineDataSourceSnapshot;

@interface PXLayoutSnapshot : NSObject
{
    id <PXLayoutEngineDataSourceSnapshot> _dataSourceSnapshot;
    struct CGRect _contentRect;
}

@property(retain, nonatomic) id <PXLayoutEngineDataSourceSnapshot> dataSourceSnapshot; // @synthesize dataSourceSnapshot=_dataSourceSnapshot;
@property(readonly, nonatomic) struct CGRect contentRect; // @synthesize contentRect=_contentRect;
- (void).cxx_destruct;
- (void)enumerateGeometriesForItemsInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct _PXLayoutGeometry)geometryForItem:(id)arg1;
- (id)description;
- (id)initWithContentRect:(struct CGRect)arg1;
- (id)init;

@end

