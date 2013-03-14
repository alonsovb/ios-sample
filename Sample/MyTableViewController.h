//
//  MyTableViewController.h
//  Sample
//
//  Created by Móviles on 12/03/13.
//  Copyright (c) 2013 Comunidad de Dispositivos Móviles. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MyTableViewController : UITableViewController
{
    NSMutableArray *colorNames;
    NSMutableArray *details;
}

@property (nonatomic, retain) NSMutableArray *colorNames;
@property (nonatomic, retain) NSMutableArray *details;

@end
