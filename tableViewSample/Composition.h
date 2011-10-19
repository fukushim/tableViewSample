//
//  Composition.h
//  tableViewSample
//
//  Created by Mitsuteru Fukushima on 11/10/14.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Composition;

@interface Composition : NSManagedObject {
@private
}
@property (nonatomic, retain) NSNumber * isVisible;
@property (nonatomic, retain) NSString * type;
@property (nonatomic, retain) NSSet* children;
@property (nonatomic, retain) Composition * parent;

@end
