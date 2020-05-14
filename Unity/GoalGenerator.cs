using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GoalGenerator : MonoBehaviour
{

    public GameObject goal;

    // Start is called before the first frame update
    void Start()
    {
        int ram = Random.Range(1, 5);
        switch(ram){
            case 1:
                Instantiate(goal, new Vector3(1f, 0.5f, 1f), Quaternion.identity);
                break;
            case 2:
                Instantiate(goal, new Vector3(17f, 0.5f, 1f), Quaternion.identity);
                break;
            case 3:
                Instantiate(goal, new Vector3(1f, 0.5f, 17f), Quaternion.identity);
                break;
            case 4:
                Instantiate(goal, new Vector3(17f, 0.5f, 17f), Quaternion.identity);
                break;
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
