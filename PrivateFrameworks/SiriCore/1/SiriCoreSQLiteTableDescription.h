//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriCore/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface SiriCoreSQLiteTableDescription : NSObject <NSCopying>
{
    NSString *_name;
    NSArray *_columns;
    NSArray *_constraints;
}

@property(readonly, copy, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(readonly, copy, nonatomic) NSArray *columns; // @synthesize columns=_columns;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 columnsProvider:(CDUnknownBlockType)arg2 constraintsProvider:(CDUnknownBlockType)arg3;
- (id)initWithName:(id)arg1 columns:(id)arg2 constraints:(id)arg3;

@end

