//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiSqlASTNode.h>

@class LiPropertyDef;

@interface LiSqlFieldRefNode : LiSqlASTNode
{
    LiPropertyDef *_propertyDef;
}

@property(retain, nonatomic) LiPropertyDef *propertyDef; // @synthesize propertyDef=_propertyDef;
- (void).cxx_destruct;
- (BOOL)refersToFields:(id)arg1;
- (id)sqlStringReplacingSymbols:(id)arg1;
- (id)descriptionWithIndent:(unsigned long long)arg1;
- (id)initWithPropertyDef:(id)arg1;

@end
